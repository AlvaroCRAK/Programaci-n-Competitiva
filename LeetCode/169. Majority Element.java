class Solution {
    public int majorityElement(int[] nums) {
    HashMap<Integer, Integer> map = new HashMap<>();
    for ( int i = 0; i < nums.length; i++ ) 
      map.put ( nums[i], map.getOrDefault(nums[i], 0) + 1 );

    int n, max;
    n = max = 0;
    for ( Map.Entry<Integer, Integer> i : map.entrySet() ) 
      if ( max < i.getValue() ) {
        max = i.getValue();
        n = i.getKey();
      }
    return n;

    }
}
