class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> count(n, false);
        for(int num : nums){
            count[num] = true;
        }
        for(int i=0; i < n;i++){
            if (!count[i]){
                return i;
            }
        }
        return n;
    }
};