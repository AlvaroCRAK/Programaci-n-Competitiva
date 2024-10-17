class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    int first, last;
    first = last = 0;
    bool tempFirst = true;
    bool temp = false;
    vector<string> list;
    for ( int i = 0; i < nums.size(); i++ ) {
        if ( tempFirst ) {
        first = nums[i];
        tempFirst = false;
        }
        if ( nums.size() - 1 == i || nums[i] + 1 != nums[i+1] ) {
        temp = true;
        last = nums[i];
        }
        if ( temp ) {
        if ( last - first == 0 ) 
            list.push_back(to_string(last));
        else 
            list.push_back(to_string(first) + "->" + to_string(last));
        temp = false;
        tempFirst = true;
        }
    }
    return list;
        
    }
};
