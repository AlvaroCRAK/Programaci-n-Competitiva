#include <iostream>
#include <vector>
using namespace std;
void func ( int n, vector<int> &array ) {
  vector<int> array2(1);
  array2[0] = array[0];

  for ( int i = 1; i < n; i++ ) {
    if ( array[i-1] > array[i] ) {
      array2.push_back(array[i]);
    }
    array2.push_back(array[i]);
  }
  cout << array2.size() << endl;
  for ( int i = 0; i < array2.size(); i++ ) 
    cout << array2[i] << " ";
  cout << endl;
}
int main () {
  int t;
  cin >> t;
  while ( t-- ) {
    int n;
    cin >> n;
    vector<int> array(n);
    for ( int i = 0; i < n; i++ ) 
      cin >> array[i];
    func ( n, array );
  }
}
