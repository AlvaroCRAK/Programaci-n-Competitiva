class Solution {
    public List<String> summaryRanges(int[] nums) {
    int first = 0;
    int last = 0;
    boolean tempFirst = true;
    boolean temp = false;
    ArrayList<String> list = new ArrayList<>();
    for ( int i = 0; i < nums.length; i++ ) {
      if ( tempFirst ) {
        first = nums[i];
        tempFirst = false;
      }
      if ( nums.length - 1 == i || nums[i] + 1 != nums[i+1] ) {
        temp = true;
        last = nums[i];
      }
      if ( temp ) {
        if ( last - first == 0 ) 
          list.add ( String.valueOf(first) );
        else 
          list.add ( String.valueOf(first) + "->" + String.valueOf(last) );
        temp = false;
        tempFirst = true;
      }
    }
    return list;


    }
}
