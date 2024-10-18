class Solution {
public:
    int majorityElement(vector<int>& nums) {

  unordered_map<int, int> map;
  for ( int i = 0; i < nums.size(); i++ ) 
    map[nums[i]] ++;

  int n = 0;
  int max = 0;
  for ( auto i : map ) {
    if ( max < i.second ) {
      max = i.second;
      n = i.first;
    }
  }
  return n;
     
    }
};
