#include <iostream>
using namespace std;
int main () {
  string word;
  cin >> word;
  for ( int i = word.length() - 1; i >= 0; i-- ) 
    cout << word[i];
}
