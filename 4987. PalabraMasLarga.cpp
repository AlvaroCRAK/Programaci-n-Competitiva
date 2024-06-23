#include <iostream>
using namespace std;
int palabraLarga(string texto){

    int letras, max;
    letras = max = 0;
    for ( int i = 0; i < texto.length(); i++ ){
        
        if ( texto[i] >= 'A' && texto[i] <= 'Z' || texto[i] >= 'a' && texto[i] <= 'z' )
            letras ++;
        else {
            if ( letras > max )
                max = letras;
            letras = 0;
        }
    }
    if ( letras > max )
        max = letras;
    
    return max;
}   

int main(){
    string texto;

    getline(cin, texto);

    cout << palabraLarga(texto);
}
