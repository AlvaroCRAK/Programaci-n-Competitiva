#include <iostream>
using namespace std;
int main () {
  string phrase;
  getline ( cin, phrase );
  int info = 0;
  for ( int i = 0; i < phrase.length(); i++ ) {
    char c = phrase[i];
    if ( c > 'F' && c < 'K' )
      info += 15;
    else 
      info += 11;
  }
  cout << info;
}
