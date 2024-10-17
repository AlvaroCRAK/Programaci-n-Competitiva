class Solution {
public:
    bool isAnagram(string s, string t) {
  unordered_map<char, int> map;
  for ( int i = 0; i < s.length(); i++ ) 
    map[s[i]] ++;
  for ( int i = 0; i < t.length(); i++ ) 
    map[t[i]] --;

  for ( auto i : map ) 
    if ( i.second != 0 )
      return false;
  return true;
        
    }
};
