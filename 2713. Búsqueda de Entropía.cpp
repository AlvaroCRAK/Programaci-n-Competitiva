#include <iostream>
using namespace std;
int informacion(string texto){

    int info = 0;
    for ( int i = 0; i < texto.length(); i++ ) {
        if ( texto[i] > 'F' && texto[i] < 'K')
            info += 15;
        else 
            info += 11;
    }
    return info;
}

int main(){ 
    string texto;
    getline(cin, texto);

    cout << informacion(texto);
}
