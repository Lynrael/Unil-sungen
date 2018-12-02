#include "fcpp.hh"
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

//AUFGABE 1A
double func(double x) {
    return x*x - 2;
}

double wurzel_iterative(double a, double b) {
    double error_margin = 1e-15, middle_value = (a+b)/2 + 0.0;
    int iteration_count = 0;
    if(func(a) * func(b) == 0) return a;
    while(abs(a - b) > error_margin) {
        iteration_count++;
        middle_value = (a+b)/2;
        if(func(a) *func(middle_value) < 0) {
            b = middle_value;
        } else if (func(b) * func(middle_value) < 0) {
            a = middle_value;
        } 
    }
    printf("iterations: %i \n", iteration_count);
    printf("result: ");
    return middle_value;
}

double wurzel_vorlesung_analog(double base) {
    double result, accumulator = 1.0;
    int iteration_count = 0;
    while(true) {
        iteration_count++;
        result = (base/accumulator + accumulator)/2;
        if(result == accumulator) break;
        accumulator = result;
    }
    printf("Iterations: %i \n", iteration_count);
    return result;
}

int fib_iterative_while(int n) {
    int a = 0;
    int b = 1;
    int i = 0;
    while(i<n) {
        int t = a+b; a = b; b = t;
        i++;
    }
    return a;
}

int INV_fib_iterative_while(int n) {
    int a = 0;
    int b = 1;
    int i = n - 1;
    while(i > 0) {
        int t = a + b; a = b; b = t;
        i--;
    }
    return a;
}

//AUFGABE 3

int *fill_array() {
    cout << "Please insert a number to push into the array" << endl;
    static int accumulator[10];
    int a;
    int i = 0;
    //i < 10
    while(true) {
        cout << "enter int = " << flush;
        cin >> a;
        if(a == -1){
            exit(EXIT_FAILURE);
        } else if (a == 0) {
            sort(accumulator, accumulator + 10);
            return accumulator;
        } else if(i >= 10) {
            throw invalid_argument("The array is already full");
        } else if(a < -1){
            throw invalid_argument("The array cannot contain negative numbers");
        } else {
            accumulator[i] = a;
        }
        i++;
    }
}

/*
    konstruktoren
    sind methoden, haben keine ruckgabewert
    ~destruktoren

    Pointer(const Pointer& other)
        : _x(other._x)
        , _y(other._y)
    {}

    copy assignment Operator
    Pointer& operator=(const Pointer& other) {
        _x = other._x;
        _y = other._y;
        return *this;
    }
*/

//aufgabe 4

bool deck_check(int deck[], int n) {
    for(int i = 0; i < n; i++) {
        if(deck[i] != i) return false; 
    }
    return true;
}

void perfect_out_shuffle(int deck1[],int deck2[], size_t length) {
    int shuffledArray[52];
    for(unsigned int i = 0; i < length - 1; i++) {
        if(i % 2 == 0 || i == 0) {
            shuffledArray[i] = deck1[i];
        } else {
            shuffledArray[i] = deck2[i];
        }
        cout << shuffledArray[i] << endl;
    }
}
int create_copies(int deck[], size_t length) {
    array<int,26> left_side_array, right_side_array;

    printf("Loop starts here\n");
    for(unsigned int i = 0; i <= (length/2)-1; ++i) {
        // if(i <= (length/2) -1) {
            left_side_array[i] = i;
        // }
        //  else {
        //     right_side_array[i] = i;
        // }
    }

    for(unsigned int i = 0; i <= length - 1; ++i) {
        if(i >= (length/2)) {
            right_side_array[i - (length/2)] = i;
        } 
    }

    for(auto x : left_side_array) {
        cout << x << " ";
    }
    printf("\n");
    for(auto x : right_side_array) {
        cout << x << " ";
    }


    // int another_size = sizeof(deck[0]);
    // cout << size << " " << another_size << endl;
    // printf("Loop starts here");
    // for(const int &number : deck) {
    //     cout << number << endl;
    // }
    return 0;

    perfect_out_shuffle(left_side_array, right_side_array, length);
}





int main() {
    //AUFGABE 1A
    // printf("please enter b and a (in that order) \n");
    // cout << wurzel_iterative(enter_int(), enter_int());

    // printf("\nplease enter a base \n");
    // cout << wurzel_vorlesung_analog(enter_int());
    // return 0;

    //AUFGABE 1B
    //Die Funktion wurzel_iterative() braucht 52 iterationen um auf das Ergebnis 1.41421 zu kommen. Die Funktion wurzel_vorlesung_analog (mit dem newton Verfahren implementiert) braucht nur 6 Iterationen um auf der selbe Ergebnis zu kommen.

    //AUFGABE 2A
    // cout << fib_iterative_while(5) << endl;

    //AUFGABE 2B
    // cout << INV_fib_iterative_while(5) << endl;
    // //P(N): n > 0, i = n - 1;
    // //Q(N): i-- nach jeder iteration

    // //AUFGABE 3
    // int *number = fill_array();
    // printf("Array(");
    // size_t length = 10;
    // for(size_t i = 0; i < length; i++) {
    //     if(number[i] != 0) {
    //         printf("%i, ", number[i]);
    //     }
    // }
    // printf(")");

    //AUFGABE 4
    int testArray[52];
    for(unsigned int i = 0; i <= (sizeof(testArray)/sizeof(testArray[0])) - 1; i++) {
        testArray[i] = i;
        // cout << testArray[i] << endl;
    }
    cout << deck_check(testArray, (sizeof(testArray)/sizeof(testArray[0])));
    create_copies(testArray, (sizeof(testArray)/sizeof(testArray[0])));



    // switch(s[i]) {
    //     case ' ': 
    //     if(in_number)
    //         done = true;
    //         break;
    //     case '+':
    //     case '-':
    //     negative=true;
    // }
}