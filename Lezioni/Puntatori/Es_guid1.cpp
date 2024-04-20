#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // Puntatore che punta a x
    cout << "Il valore di x: " << x << endl;
    cout << "Il valore a cui punta ptr: " << *ptr << endl;
    return 0;
}
