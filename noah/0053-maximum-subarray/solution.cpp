#include <algorithm>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        int min_vec = 0;
        int prefix = 0;
        int res = -4354354;
        // PREFIX and MIN
        for (int i=0; i < nums.size();i++){
            min_vec = min(min_vec, prefix);
            prefix = prefix + nums[i];
            res = max(prefix - min_vec, res);
        }
        return res;
    }
};