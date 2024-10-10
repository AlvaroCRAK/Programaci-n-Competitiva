#include <iostream>
using namespace std;
int main () {
  string name;
  cin >> name;
  for ( int i = 0; i < name.length(); i++ ) {
    char c = name[i];
    printf ( "%c ASCII value is %d\n", c, (int)c );
    if ( i == 3 ) break;
  }
}
