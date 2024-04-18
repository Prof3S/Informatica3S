#include <iostream>

using namespace std;

double calcolaMediaPonderata(const double numeri[], const double pesi[], int lunghezza) {
    double somma = 0.0;
    double sommaPesi = 0.0;

    for (int i = 0; i < lunghezza; ++i) {
        somma += numeri[i] * pesi[i];
        sommaPesi += pesi[i];
    }

    if (sommaPesi == 0) {
        cerr << "Errore: somma dei pesi zero." << endl;
        return 0.0; // Restituisce 0 se la somma dei pesi è zero per evitare divisione per zero.
    }

    return somma / sommaPesi;
}

int main() {
    const int lunghezza = 5;
    double numeri[lunghezza] = {10.0, 20.0, 30.0, 40.0, 50.0};
    double pesi[lunghezza] = {1.0, 2.0, 3.0, 4.0, 5.0};

    double mediaPonderata = calcolaMediaPonderata(numeri, pesi, lunghezza);
    std::cout << "La media ponderata è: " << mediaPonderata << endl;

    return 0;
}
