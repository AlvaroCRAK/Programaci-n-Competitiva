class Solution {
public:
    int lengthOfLastWord(string s) {
  bool temp = false;
  int n = 0;
  for ( int i = s.length() - 1; i >= 0; i-- ) {
    char c = s[i];
    if ( c != ' ' )
      temp = true;
    if ( temp ) {
      if ( c == ' ' )
        break;
      n++;
    }
  }
  return n;
        
    }
};
