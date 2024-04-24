/*=======================================================================================================================================================
Scrivi una funzione invertiStringa che accetti una stringa come argomento e restituisca la stringa invertita. Ad esempio, se la stringa è "ciao",
la funzione dovrebbe restituire "oaic".
=========================================================================================================================================================*/

#include <iostream>
#include <string>

using namespace std;

string invertiStringa(string str) {
    int lunghezza = str.length();
    for (int i = 0; i < lunghezza/2; ++i) {
        char temp = str[i];
        str[i] = str[lunghezza - 1 - i];
        str[lunghezza - 1 - i] = temp;
    }
    return str;
}

int main() {
    string input;
    cout << "Inserisci una stringa: ";
    cin >> input;
    cout << "Stringa invertita: " << invertiStringa(input) << endl;
    return 0;
}

