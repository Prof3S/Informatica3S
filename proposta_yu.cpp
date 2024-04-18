#include <iostream>

using namespace std;

int main () {
    int n; //numero di esami
    cout << "Inserire il numero di esami: ";
    cin >> n;
    int s=0; //somma dei CFU
    float * v = new float[n]; //vettore per le votazioni degli studenti
    int * CFU = new int[n]; //crediti formativi

    for (int i=0; i<n; i++) {
        cout << "Votazione esame: " << i+1 << endl;
        cin >> v[i];
        cout << "CFU corrispondente: " << i+1 << endl;
        cin >> CFU[i]; 
        s = s + CFU[i];
    }

    float M;
    float x = 0;

    for (int i=0; i<n; i++) {
        x = v[i] * CFU[i] + x;
    }

    delete []  v;
    delete [] CFU;
    M = x/s;

    cout << "La media è: " << M << endl;

}