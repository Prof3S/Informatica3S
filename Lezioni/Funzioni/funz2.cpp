#include <iostream>

using namespace std;

/*==================================================================================================================================================================================================================
Passaggio per riferimento: 
In C++, un riferimento è un alias, o un altro nome, per un oggetto esistente.I riferimenti forniscono un modo per accedere a un oggetto utilizzando un
nome diverso, ma con la stessa posizione di memoria dell'oggetto originale.I riferimenti sono ampiamente utilizzati per passare argomenti alle 
funzioni, consentendo alle funzioni di operare direttamente sugli oggettioriginali anziché fare una copia di essi.

Ecco alcune caratteristiche chiave dei riferimenti in C++:
Sintassi: In C++, un riferimento viene definito utilizzando il simbolo & dopo il tipo di dato. Ad esempio, int &ref definisce un riferimento a 
un intero.
Alias: Un riferimento serve come un alias per un oggetto esistente.Dopo la definizione, il riferimento può essere utilizzato come un normale
nome per l'oggetto.
Non può essere riassociato: Una volta che un riferimento è stato inizializzato con un oggetto, non può essere riassociato a un altro oggetto. Questo significa che un riferimento non può cambiare l'oggetto a cui fa riferimento dopo la sua inizializzazione.
Non può essere nullo: Un riferimento deve sempre fare riferimento aun oggetto esistente. Non è possibile avere un riferimento "null" o vuoto.
Passaggio per riferimento: I riferimenti sono spesso utilizzati per passare argomenti alle funzioni per consentire alle funzioni di operare 
direttamente sugli oggetti originali, invece di fare una copia di essi.
Rivediamo lo scorso esempio ...
==================================================================================================================================================================================================================*/

int somma (int a, int b) {
    return a + b;
}

void scambio(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
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


    //Ora proviamo a usare la funzione di scambio

    cout << "Valore della prima variabile prima dello scambio: " << v1 << endl;
    cout << "Valore della prima variabile prima dello scambio: " << v2 << endl;

    scambio(v1, v2); //ora scambiamo il contenuto delle variabili

    cout << "Valore della prima variabile dopo lo scambio: " << v1 << endl;
    cout << "Valore della prima variabile dopo lo scambio: " << v2 << endl;

    cout  << "\n\nDopo lo scambio, la somma tra i due numeri è: " << somma(v1, v2);
    
    return 0;

}