class Solution {
public:
    struct Comp {
        bool operator()(int a_int, int b_int) const {
            string a = to_string(a_int);
            string b = to_string(b_int);
            return a + b > b + a;
        }
    };
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), Comp());
        string res = "";
        for (int num : nums){
            res += to_string(num);
        }
        res.erase(0, res.find_first_not_of('0'));
        if (res == ""){
            return "0";
        }
        return res;
    }
};