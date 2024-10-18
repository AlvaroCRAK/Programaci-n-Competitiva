class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
  string str;
  int j = 0;
  if ( strs[j].empty() ) 
    return str;
  char c;
  for ( int i = 0; i < strs.size(); i++ ) {
    if ( i == 0 )
      c = strs[i][j];

    if ( c != strs[i][j] )
      return str;

    if ( i == strs.size() - 1 ) {
      j++;
      i = -1;
      str += c;
      if ( strs[0].length() == j ) 
        return str;
    }
  }
  return str;

    }
};
