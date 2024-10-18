class Solution {
public:
    int strStr(string haystack, string needle) {
  for ( int i = 0; i < haystack.length(); i++ ) {
    if ( haystack[i] == needle[0] ) {
      if ( needle.length() > haystack.length() - i ) 
        continue;
      bool temp = true;
      for ( int j = 0; j < needle.length(); j++ ) 
        if ( haystack[i+j] != needle[j] ) {
          temp = false;
          break;
        }
      if ( temp ) 
        return i;
    }
  }
  return -1;

                
    }
};
