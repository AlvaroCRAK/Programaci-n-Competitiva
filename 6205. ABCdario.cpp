#include <iostream>
using namespace std;

string abecedario(string texto){
    bool letras[26] = { false };
    for ( int i = 0; i < texto.length(); i++){
        int j = texto[i] - 'a';
        letras[j] = true;        
    }

    for(int i = 0; i < 26; i++){
        if(letras[i] == false)
            return "NO WAY";
    }
    
    return "PERFECT";
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string texto;
        getline(cin, texto);
        
        cout << abecedario(texto) << endl;
    }
}
