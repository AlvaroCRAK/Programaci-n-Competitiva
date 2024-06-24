#include <iostream>
using namespace std;
void ascii(string palabra){

    for ( int i = 0; i < 4; i++){
        cout << palabra[i] << " ASCII value is " << (int)palabra[i] << endl;
        if(palabra.length() == i + 1)
            break;
    }
}

int main(){
    string palabra;
    cin >> palabra;
    ascii(palabra);
}
