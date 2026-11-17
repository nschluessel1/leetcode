#include <algorithm>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        vector<int> prefix(nums.size()+1);
        vector<int> min_vec(nums.size()+1);
        min_vec[0] = 0;
        prefix[0] = 0;
        // PREFIX and MIN
        for (int i=0; i < nums.size();i++){
            prefix[i+1] = prefix[i] + nums[i];
            min_vec[i+1] = min(min_vec[i], prefix[i]);
        }
        
        // For ever i get max sum
        int res = -4354354;
        for(int i=1; i < nums.size()+1;i++){
            cout << prefix[i] - min_vec[i] << std::endl;
            if (res <= prefix[i] - min_vec[i]){
                res = prefix[i] - min_vec[i];
            }
        }
        return res;
    }
};