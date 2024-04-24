/*=======================================================================================================================================================
Calcolare il fattoriale di un numero
=========================================================================================================================================================*/

#include <iostream>

using namespace std;

/*======================================================================================================================================================
Una funzione ricorsiva è una funzione che si richiama direttamente o indirettamente all'interno del suo stesso corpo. In altre parole,
è una funzione che si autoreferenzia durante la sua esecuzione.
Una funzione ricorsiva ha due componenti principali:
Caso Base: È il punto in cui la funzione smette di richiamarsi e restituisce un risultato direttamente. 
Questo è essenziale per evitare che la ricorsione continui all'infinito.
Caso Ricorsivo: È il punto in cui la funzione si richiama stessa con argomenti diversi. Questo passaggio è cruciale per 
la progressione della ricorsione verso il caso base.
La ricorsione può essere più difficile da comprendere rispetto ad un approccio iterativo (usando cicli come for o while), 
ma in alcuni casi può rendere il codice più semplice ed elegante. Tuttavia, è importante tener conto del fatto che la ricorsione può consumare molta memoria, 
poiché ogni chiamata di funzione aggiunge uno stack frame alla pila di esecuzione del programma.
======================================================================================================================================================*/

int fattoriale(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fattoriale(n - 1);
}

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;
    cout << "Fattoriale: " << fattoriale(numero) << endl;
    return 0;
}
