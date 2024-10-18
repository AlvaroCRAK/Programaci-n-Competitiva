class Solution {
    public int strStr(String haystack, String needle) {
    for ( int i = 0; i < haystack.length(); i++ ) {
      if ( haystack.charAt(i) == needle.charAt(0) ) {
        if ( needle.length() > haystack.length() - i )
          continue;
        boolean temp = true;
        for ( int j = 0; j < needle.length(); j++ ) 
          if ( haystack.charAt(i+j) != needle.charAt(j) ) {
            temp = false;
            break;
          }
        if ( temp ) 
          return i;
      }
    }
    return -1;

    }
}
