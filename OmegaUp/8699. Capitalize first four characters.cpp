#include <iostream>
using namespace std;
int main () {
  string name;
  cin >> name;
  for ( int i = 0; i < name.length(); i++ ) {
    char c = name[i];
    if ( c >= 'a' && c <= 'z' )
      name[i] -= 32;
    if ( i == 3 ) break;
  }
  cout << name;
}
