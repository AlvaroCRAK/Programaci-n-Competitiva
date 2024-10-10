#include <iostream>
using namespace std;
int main () {
  string phrase;
  getline ( cin, phrase );
  int n, max;
  n = max = 0;
  for ( int i = 0; i < phrase.length(); i++ ) {
    char c = phrase[i];
    if ( c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' )
      n++;
    else {
      if ( max < n )
        max = n;
      n = 0;
    }
  }
  if ( max < n )
    max = n;
  cout << max;
}
