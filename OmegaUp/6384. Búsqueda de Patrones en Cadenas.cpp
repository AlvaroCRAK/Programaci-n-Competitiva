#include <iostream>
using namespace std;
int main () {
  string text;
  cin >> text;
  string pattern;
  cin >> pattern;
  for ( int i = 0; i < text.length(); i++ ) {
    if ( text[i] == pattern[0] ) {
      if ( text.length() - i + 2 < pattern.length() )
        continue;
      bool temp = true;
      for ( int j = 0; j < pattern.length(); j++ ) 
        if ( pattern[j] != text[i+j] ) {
          temp = false;
          break;
        }
      if ( temp )
        cout << i + 1 << endl;
    }
  }
}
