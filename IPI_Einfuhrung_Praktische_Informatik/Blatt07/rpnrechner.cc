#include "fcpp.hh"
#include <cstring> // fuer strlen, Laenge eines C-Strings
#include <stack>

// Definieren Sie hier Ihren Stack und legen Sie eine Instanz als globale
// Variable an

struct stack {
  int numbers[100];
  int counter;
};

// Funktion, die auf dem Stack eine Rechenoperation durchfuehrt
// Rueckgabewert: ob die Berechnung durchgefuehrt werden konnte
bool rechne( char operation )
{
  
}

int main( int argc, char *argv[] )
{
  // arg enthaelt die als Eingabe uebergebene Zeichenfolge
  char *arg = argv[1];
  // Schleife, die die Zeichen der Eingabe nacheinander ablaeuft
  for (unsigned int i=0; i<strlen(arg); i++)
  {
    char anything = 49;
    std::cout << arg[i] << "\n";
    // char zeichen = arg[i]; // aktuelles Zeichen
    // if(rechne(arg[i])) {
    //   string op(1, arg[i]);
    //   s.push(op);
    // } else {
    //   string op1 = s.top();
    //   s.pop();
    //   string op2 = s.top();
    //   s.pop();
    //   s.push("(" + op2 + arg[i] + op1 + ")");
    // }
    // return s.top();
    // Beachten Sie: der Inhalt der Variable zeichen ist der ASCII-Code
    // des entsprechenden Zeichens. Dieser stimmt im Falle der Zeichen '0'..'9'
    // nicht mit der entsprechenden Ziffer Ueberein.

    // Fuegen Sie hier Code ein, der das Zeichen verarbeitet, also Ziffern
    // zu Zahlen zusammenfuegt, Operatoren anwendet und andere Zeichen
    // ignoriert
  }

  // Hier muessen Sie evtl. den Sonderfall behandeln, dass die Formel keine
  // Operatoren enthaelt

  // Pruefen Sie, ob der Stack genau eine Zahl (das Ergebnis) enthaelt, und
  // geben Sie sie gegebenenfalls aus

  return 0;
}
