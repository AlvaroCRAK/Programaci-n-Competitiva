class Solution {
    public int lengthOfLastWord(String s) {
    int n = 0;

    boolean temp = false;
    for ( int i = s.length() - 1; i >= 0; i-- ) {
      char c = s.charAt(i);
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
}
