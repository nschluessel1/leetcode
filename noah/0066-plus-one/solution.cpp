class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> res_vec(digits.size(), 0);
        for(int i = digits.size() - 1; i >= 0;i--){
            int res = digits[i] + carry;
            if (res >= 10){
                res_vec[i] = res % 10;
                carry = 1;
            }
            else{
                res_vec[i] = res;
                carry = 0;
            }
        }
        if (carry == 1){
            res_vec.insert(res_vec.begin(), 1);
        }
        return res_vec;
    }
};