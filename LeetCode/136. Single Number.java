class Solution {
    public int singleNumber(int[] nums) {
    int n = nums[0];
    for ( int i = 1; i < nums.length; i++ ) 
      n ^= nums[i];
    return n;
       
    }
}

class Solution {
    public int singleNumber(int[] nums) {
    Arrays.sort ( nums );
    for ( int i = 0; i < nums.length - 2; i += 2) {
      if ( nums[i] != nums[i+1] )
        return nums[i];
    }
    return nums[nums.length - 1];
 
    }
}

class Solution {
    public int singleNumber(int[] nums) {
    HashMap<Integer, Integer> map = new HashMap<>();
    for ( int i = 0; i < nums.length; i++ ) 
      if ( map.containsKey( nums[i] ) )
        map.put ( nums[i], map.get(nums[i]) + 1 );
      else 
        map.put ( nums[i], 1 );

    Set<Map.Entry<Integer, Integer>> entry = map.entrySet();
    for ( Map.Entry<Integer, Integer> i : entry )
      if ( i.getValue() == 1 )
        return i.getKey();
    return -1;

    }
}

class Solution {
    public int singleNumber(int[] nums) {
    HashMap<Integer, Integer> map = new HashMap<>();
    for ( int i = 0; i < nums.length; i++ ) 
      map.put ( nums[i], map.getOrDefault( nums[i], 0 ) + 1);

    for ( int i : map.keySet() )
      if ( map.get(i) == 1 ) 
        return i;
      
    return -1;


    }
}
