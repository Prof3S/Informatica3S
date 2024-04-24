/*=======================================================================================================================================================
Scrivi una funzione sommaArray che accetti un array di interi e restituisca la somma di tutti gli elementi dell'array.
=========================================================================================================================================================*/

#include <iostream>

using namespace std;

int sommaArray(int array[], int lunghezza) {
    int somma = 0;
    for (int i = 0; i < lunghezza; ++i) {
        somma += array[i];
    }
    return somma;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(array) / sizeof(array[0]);
    cout << "Somma: " << sommaArray(array, lunghezza) << endl;
    return 0;
}
