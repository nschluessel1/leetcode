class Solution {
public:
    bool isPerfectSquare(int num) {
        for(double i=1; i < num/20+20;i++){
            if (num/i == i){
                return true;
            }
        }
        return false;
    }
};