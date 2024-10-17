class Solution {
public:
    bool isPalindrome(string s) {
        
  string word;
  for ( int i = 0; i < s.length(); i++ ) {
    char c = s[i];
    if ( c >= 'A' && c <= 'Z' ) 
      word.push_back(c+32);
    else if ( c >= 'a' && c <= 'z' || c >= '0' && c <= '9' )
      word.push_back(c);
  }
  bool temp = true;
  for ( int i = 0; i < word.length() / 2; i++ ) 
    if ( word[i] != word[word.length() - 1 - i] ) {
      temp = false;
      break;
    }
  return temp;
    }
};
