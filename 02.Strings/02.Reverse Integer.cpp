class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        while(x != 0){
            int lastDigit = x % 10;
            // Check for overflow/underflow before updating ans
            if ((revNum > INT_MAX / 10) || (revNum < INT_MIN / 10)) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
            revNum = revNum * 10 + lastDigit;
            x = x/10;
        }
        return revNum;
    }
};
