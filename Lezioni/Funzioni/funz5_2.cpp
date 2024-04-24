/*=======================================================================================================================================================
Calcolare il fattoriale di un numero
=========================================================================================================================================================
unsigned long long: È un intero senza segno a 64 bit che può rappresentare valori nell'intervallo da 0 a 18.446.744.073.709.551.615.
int: È un tipo di dato intero a 32 bit, che può rappresentare valori nell'intervallo approssimativo da -2.147.483.648 a 2.147.483.647.
unsigned int: È un intero senza segno a 32 bit, che può rappresentare valori nell'intervallo da 0 a 4.294.967.295.
=========================================================================================================================================================*/

#include <iostream>

using namespace std;

unsigned long long calcolaFattoriale(int n) {
    unsigned long long fattoriale = 1;
    for (int i = 2; i <= n; ++i) {
        fattoriale *= i;
    }
    return fattoriale;
}

int main() {
    int numero;
    cout << "Inserisci un numero intero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cerr << "Errore: Il fattoriale è definito solo per numeri interi non negativi." << endl;
        return 1;
    }

    unsigned long long risultato = calcolaFattoriale(numero);
    cout << "Il fattoriale di " << numero << " è: " << risultato << endl;

    return 0;
}
