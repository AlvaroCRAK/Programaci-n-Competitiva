#include <iostream>
using namespace std;

string func ( string alphabet ) {
  bool letters[26] = { false };
  for ( int i = 0; i < alphabet.length(); i++ ) {
    int n = (int) (alphabet[i] - 'a');
    letters[n] = true;
  }
  for ( int i = 0; i < 26; i++ ) 
    if ( letters[i] == false ) 
      return "NO WAY";
  return "PERFECT";
}
int main () {
  int n;
  cin >> n;
  while ( n-- ) {
    string alphabet;
    cin >> alphabet;
    cout << func ( alphabet ) << endl;
  }
}
