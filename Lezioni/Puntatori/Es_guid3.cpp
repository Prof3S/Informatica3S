#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // Il nome di un array è un puntatore al suo primo elemento
    for(int i = 0; i < 5; ++i) {
        cout << "Elemento " << i << ": " << *(ptr + i) << endl; // Accede agli elementi dell'array usando l'aritmetica dei puntatori
    }
    return 0;
}
