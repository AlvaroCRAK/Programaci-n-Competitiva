#include <iostream>
using namespace std;

string invertirPalabra(string palabra){

    string invertido = palabra;
    for ( int i = 0; i < palabra.length(); i++ )
        invertido[i] = palabra[palabra.length() - 1 - i];
    
    return invertido;
}


int main(){
    string palabra;
    cin >> palabra;

    cout << invertirPalabra(palabra);
}
