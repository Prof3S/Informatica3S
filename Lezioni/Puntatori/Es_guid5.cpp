#include <iostream>
using namespace std;

void funzione(int x) {
    cout << "Valore passato alla funzione: " << x << endl;
}

int main() {
    void (*ptr_fun)(int); // Puntatore a una funzione che accetta un intero
    ptr_fun = &funzione; // Assegna il puntatore alla funzione
    (*ptr_fun)(10); // Chiamata della funzione attraverso il puntatore
    return 0;
}
