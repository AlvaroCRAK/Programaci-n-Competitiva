#include <iostream>
using namespace std;
string mayuscula(string palabra){
    for(int i = 0; i < 4; i++)
        if(palabra[i] >= 'a' && palabra[i] <= 'z')
            palabra[i] -= 32;


    return palabra;
}

int main(){
    string palabra;
    cin >> palabra;

    cout << mayuscula(palabra);
}
