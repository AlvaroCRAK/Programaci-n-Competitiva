#include <iostream>
using namespace std;
void patrones(string texto, string patron){

    for ( int i = 0; i < texto.length(); i++){
        if(texto[i] == patron[0]){
            int j = 0;
            while( patron[j] == texto[i + j]){
                if(j + 1 == patron.length())
                    cout << i + 1 << endl;
                j++;
            }
        }
    }    
}

int main(){
    string texto, patron;
    cin >> texto >> patron;
    patrones(texto, patron);
}
