class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1){
            return true;
        }
        double x = n;
        while(x > 4){
            cout << n << endl;
            x /= 4;
        }
        if (x == 4){
            return true;
        }
        return false;
    }
};