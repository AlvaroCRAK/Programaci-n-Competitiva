class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      for ( int i = digits.size() - 1; i >= 0; i-- ) {
          if ( digits[i] != 9 ) {
          digits[i] += 1;
          return digits;
          } else { 
          if ( i == 0 ) {
              digits.push_back(0);
              digits[i] = 1;
          } else
              digits[i] = 0;
          }
      }
      return digits;
        
    }
};
