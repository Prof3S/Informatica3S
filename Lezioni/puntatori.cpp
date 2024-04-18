#include <iostream>

using namespace std;

int main () {

    int num = 12000;

    int * p;

    cout << "Valore di num               : " << num << endl;
    cout << "Indirizzo di memoria di num : " << &num << endl;

    cout << "Valore di *p               : " << p << endl;
    cout << "Indirizzo di memoria di *p : " << &p << endl;

    p = &num;

    cout << "Ora 'p' punta a num" << endl;

    cout << "Valore di *p               : " << p << endl;
    cout << "Indirizzo di memoria di *p : " << &p << endl;

    *p = 10000;

    cout << "Valore di *p               : " << *p << endl;
    cout << "Indirizzo di memoria di *p : " << &p << endl;

    int numeri[3]; //Array STATICO, la sua dimensione
    //non cambia durante il programma

    int n = 3;
    int * numeri = new int[n]; // Array DINAMICO, la cui dimensione
    //è dettata dal valore di una vriabile.

    delete  [] numeri; // Libera la memoria
/*
    int **pap = &p;

    cout << "**pap : " << **pap << endl;
    cout << "*pap  : " << *pap << endl;
    cout << "&pap  : " << &pap << endl;
    cout << "&*pap : " << &*pap << endl;
*/
    return 0;
}   