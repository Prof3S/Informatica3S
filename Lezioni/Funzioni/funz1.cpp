#include <iostream>

using namespace std;

/*==================================================================================================================================================================================================================
Il concetto di passaggio per valore in programmazione si riferisce alla pratica di trasferire il valore di una variabile come argomento a una funzione. 
Quando una variabile viene passata per valore a una funzione,
viene creata una copia locale della variabile all'interno della funzione, e qualsiasi modifica apportata a questa copia locale non influenzerà la variabile 
originale nella funzione chiamante.

Ecco una panoramica dei principali aspetti del passaggio per valore:

Copia dei valori: Quando una variabile viene passata per valore, il valore della variabile viene copiato e assegnato a un nuovo spazio di memoria all'interno 
della funzione.
Isolamento delle modifiche: Poiché viene utilizzata una copia del valore originale, qualsiasi modifica apportata alla variabile all'interno della 
funzione avrà effetto solo sulla copia locale, senza influenzare la variabile originale nella funzione chiamante.
Costo delle copie: Il passaggio per valore può essere più costoso in termini di prestazioni rispetto ad altri metodi di passaggio di argomenti, 
specialmente quando si lavora con dati complessi come strutture o oggetti. Questo perché richiede la creazione di una copia dei dati, 
che può essere dispendiosa in termini di memoria e tempo.
Sicurezza: Il passaggio per valore garantisce che le funzioni non modifichino accidentalmente le variabili della funzione chiamante, 
il che può rendere il codice più sicuro e prevedibile.
Utilizzo comune: Il passaggio per valore è il metodo predefinito di passaggio di argomenti in molti linguaggi di programmazione, compreso C++. 
È utile quando si desidera mantenere isolati i dati della funzione chiamante e della funzione chiamata.

Vediamo un esempio...
==================================================================================================================================================================================================================*/

int somma (int a, int b) {
    return a + b;
}

int main (int argc, char** argv) {

    int v1, v2;

    cout << "Inserire il primo valore: ";
    cin >> v1;
    cout << endl;
    cout << "Inserire il secondo valore: ";
    cin >> v2;
    cout << endl;
    cout << "La somma tra i due numeri è: " << somma(v1, v2);
    
    return 0;

}