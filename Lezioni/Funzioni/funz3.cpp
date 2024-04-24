/*=======================================================================================================================================================
Scrivi una funzione in C++ chiamata calcola che accetti tre argomenti: due numeri e un carattere che rappresenta un'operazione matematica (+, -, *, /).
La funzione deve restituire il risultato dell'operazione applicata ai due numeri.
=========================================================================================================================================================*/

#include <iostream>

using namespace std;

double calcola(double a, double b, char operatore) {
    switch (operatore) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else {
                cerr << "Errore: Divisione per zero" << endl;
                return 0;
            }
        default:
            cerr << "Errore: Operatore non valido" << endl;
            return 0;
    }
}

int main() {
    
    double num1, num2;
    char operatore;

    cout << "Inserisci due numeri: ";
    cin >> num1 >> num2;
    cout << "Inserisci un operatore (+, -, *, /): ";
    cin >> operatore;

    cout << "Risultato: " << calcola(num1, num2, operatore) << endl;

    return 0;
}
