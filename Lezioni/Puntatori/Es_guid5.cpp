#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // Puntatore a x
    int** ptr_ptr = &ptr; // Puntatore a un puntatore
    cout << "Il valore di x: " << x << endl;
    cout << "Il valore a cui punta ptr: " << *ptr << endl;
    cout << "Il valore a cui punta ptr_ptr: " << **ptr_ptr << endl;
    return 0;
}
