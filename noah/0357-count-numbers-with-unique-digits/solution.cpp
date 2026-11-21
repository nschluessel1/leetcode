class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int total = 1;
        int ways = 9;
        int available = 9;
        for(int i=1; i <= n;i++){
            total += ways;
            ways *= available;
            available--;
        }
        return total;
    }
};