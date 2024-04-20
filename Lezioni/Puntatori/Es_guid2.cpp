#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    *ptr = 20; // Modifica il valore di x attraverso il puntatore
    cout << "Il nuovo valore di x: " << x << endl;
    return 0;
}
