class Solution {
    public String longestCommonPrefix(String[] strs) {
    String str = "";

    int j = 0;
    if ( strs[j].isEmpty() ) 
      return str;
    char c = ' ';
    for ( int i = 0; i < strs.length; i++ ) {
      if ( i == 0 ) 
        c = strs[i].charAt(j);

      if ( strs[i].length() <= j || strs[i].charAt(j) != c ) 
        return str;

      if ( i == strs.length - 1 ) {
        i = -1;
        j++;
        str += c;
        if ( strs[0].length() == j ) 
          return str;
      }
    }
    return str;


    }
}
