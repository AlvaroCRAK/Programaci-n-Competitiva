#include <iostream>
using namespace std;
int main () {
  int m, n;
  cin >> m >> n;
  int matriz[m][n] = {};
  for ( int i = 0; i < m; i++ ) 
    for ( int j = 0; j < n; j++ ) 
      cin >> matriz[i][j];
  int matriz2[m][n] = {};

  for ( int i = 0; i < m; i++ ) {
    for ( int j = 0; j < n; j++ ) {

      int val = 0;

      for ( int k = -1; k <= 1; k++ ) 
        for ( int l = -1; l <= 1; l++ ) 
          if ( (i+k) >= 0 && (i+k) < m && (j+l) >= 0 && (j+l) < n )
            val += matriz[i+k][j+l];
      matriz2[i][j] = val;

    }
  }

  for ( int i = 0; i < m; i++ ) {
    for ( int j = 0; j < n; j++ ) 
      cout << matriz2[i][j] << " ";
    cout << endl;
  }

}
