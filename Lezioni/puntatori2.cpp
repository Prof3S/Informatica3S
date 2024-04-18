#include <iostream>

using namespace std;

int main() {

    //double v[] = {1,10,2};

    //cout << v;
    //cout << *v;
    //cout << v[0];

    //double w[] = {3,6,7};

    //v = w; // non va!

    /*======================================================================
        Il nome di una variabile array `e un puntatore costante al primo
        elemento dello array.
        v pu`o essere usata in espressioni che fanno uso di aritmetica
        dei puntatori, ma indirizzo contenuto in v non `e modificabile.
    =======================================================================*/

    double v[] = { 1 , 10, 9} ;
    double * ptr = v ;
    cout << "ptr[1] = " << ptr[1] << endl;
    cout << "ptr[2] = " << ptr[2] << endl;
    cout << "*(ptr + 1) = " << *(ptr + 1) << endl;
    cout << "*(ptr + 2) = " << *(ptr + 2) << endl;
    cout << "*(v + 2) = "   << *(v + 2) << endl;

    /*======================================================================
        Se ptr `e un puntatore, mediante la espressione (ptr + x) si ottiene
        l’indirizzo della locazione di memoria distante x posizioni
        rispetto alla locazione puntata da ptr.
        L’incremento `e operato dal compilatore, e dipende dalla
        dimensione in byte del tipo di ptr.
    =======================================================================*/

}

