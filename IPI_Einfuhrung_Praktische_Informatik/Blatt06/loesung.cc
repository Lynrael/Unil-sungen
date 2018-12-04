#include "fcpp.hh"
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

//AUFGABE 1A && 1B
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

// int fib_iterative_while(int n) {
//     int a = 0;
//     int b = 1;
//     int i = 0;
//     while(i<n) {
//         int t = a+b; a = b; b = t;
//         i++;
//     }
//     return a;
// }

// int INV_fib_iterative_while(int n) {
//     int a = 0;
//     int b = 1;
//     int i = n - 1;
//     while(i > 0) {
//         int t = a + b; a = b; b = t;
//         i--;
//     }
//     return a;
// }

//AUFGABE 3
int *fill_array() {
    cout << "\nPlease insert a number to push into the array" << endl;
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

//aufgabe 4

bool deck_check(int deck[], int n) {
    for(int i = 0; i < n; i++) {
        if(deck[i] != i) return false; 
    }
    return true;
}

void build_deck(int *deck, size_t length) {
    for(unsigned int i = 0; i <= length - 1; i++) {
        deck[i] = i;
    }
}

void print_array_to_console(int array[], size_t length) {
    printf("\nArray(");
    for(unsigned int i = 0; i <= length - 1; i++) {
            printf("%i, ", array[i]);
    }
    printf(")");
}

int *perfect_out_shuffle(int deck[], size_t length) {
    int newArray[52];
    unsigned int counter = 1;
    unsigned int middle = (length/2) - 1;
    for(unsigned int i = 0; i <= length - 1; i++) {
        if(i == 0 || i == length - 1) {
            newArray[i] = deck[i];
        } 
        else if(i % 2 == 0) {
            newArray[i] = deck[i/2];
        } else  if ( i % 2 == 1) {
            newArray[i] = deck[middle + counter];
            counter++;
        }
    }
    return newArray;
}

int *perfect_in_shuffle(int deck[], size_t length) {
    int newArray[52];
    unsigned int even_counter = 0;
    unsigned int odd_counter = 0;
    unsigned int middle = (length/2) - 1;
    for(unsigned int i = 0; i <= length -1; i++) {
        if(i == 0) {
            newArray[i] = deck[middle + 1];
        } else if (i % 2 == 0) {
            newArray[i] = deck[i + (middle - even_counter)];
            even_counter++;
        } else if (i % 2 == 1) {
            newArray[i] = deck[odd_counter];
            odd_counter++;
        }
    }
    return newArray;
}

int solve_shuffle(int deck[], size_t length) {
    int iteration_count = 0;
    while(!deck_check(deck, length)) {
        iteration_count++;
        int *perfectly_out_shuffled_array = perfect_out_shuffle(deck, length);
        print_array_to_console(perfectly_out_shuffled_array, length);
        if(!deck_check(perfectly_out_shuffled_array, length)) {
            break;
        }

        iteration_count++;
        int *perfectly_in_shuffled_array = perfect_in_shuffle(deck,length);
        print_array_to_console(perfectly_in_shuffled_array, length);
        if(!deck_check(perfectly_in_shuffled_array, length)) {
            break;
        }
    }
    print("\nThe amount of iterations needed were: ", iteration_count, "\n", 0);
    return iteration_count;
}


int main() {
    // AUFGABE 1A
    printf("please enter b and a (in that order) Ex: 1 and 2 \n");
    cout << wurzel_iterative(enter_int(), enter_int());

    printf("\nplease enter a base \n");
    cout << wurzel_vorlesung_analog(enter_int());

    // AUFGABE 1B
    Die Funktion wurzel_iterative() braucht 52 iterationen um auf das Ergebnis 1.41421 zu kommen. Die Funktion wurzel_vorlesung_analog (mit dem newton Verfahren implementiert) braucht nur 6 Iterationen um auf der selbe Ergebnis zu kommen.

    AUFGABE 2A
    cout << fib_iterative_while(5) << endl;

    // AUFGABE 2B
    cout << INV_fib_iterative_while(5) << endl;
    //P(N): n > 0, i = n - 1;
    //Q(N): i-- nach jeder iteration

    // AUFGABE 3
    int *number = fill_array();
    printf("Array(");
    size_t length = 10;
    for(size_t i = 0; i < length; i++) {
        if(number[i] != 0) {
            printf("%i, ", number[i]);
        }
    }
    printf(")");

    //AUFGABE 4
    int deck[52] = {};
    size_t length = sizeof(deck)/sizeof(deck[0]);
    build_deck(deck, length );
    print("\n The builded deck looks like this: \n");
    print_array_to_console(deck,length );
    // int *perfectly_out_shuffled_array = perfect_out_shuffle(deck, length);
    solve_shuffle(deck, length);
    return 0;
}