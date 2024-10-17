class Solution {
    public boolean isPalindrome(String s) {
    StringBuilder word = new StringBuilder();
    for ( int i = 0; i < s.length(); i++ ) {
      char c = s.charAt(i);
      if ( c >= 'A' && c <= 'Z' ) 
        word.append ( (char)(c + 32) );
      else if ( c >= 'a' && c <= 'z' || c >= '0' && c <= '9' )
        word.append ( c );
    }
    boolean temp = true;
    for ( int i = 0; i < word.length() / 2; i++ ) {
      if ( word.charAt(i) != word.charAt( word.length() - 1 - i ) ) {
        temp = false;
        break;
      }
    }
    return temp;

    }
}
