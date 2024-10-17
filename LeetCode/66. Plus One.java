class Solution {
    public int[] plusOne(int[] digits) {
    for ( int i = digits.length - 1; i >= 0; i-- ) {
      if ( digits[i] != 9 ) {
        digits[i] ++;
        return digits;
      } else {
        if ( i == 0 ) {
          digits[i] = 1;
          break;
        }
        digits[i] = 0;
      }
    }
    int[] digits2 = new int[ digits.length + 1 ];
    for ( int i = 0; i < digits.length; i++ ) 
      digits2[i] = digits[i];
    return digits2;

    }
}
