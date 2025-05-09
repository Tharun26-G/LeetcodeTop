class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n){
            count += n & 1; // AND operation 1 & 1 = 1 cnt ++, 0 & 1 = 0 nothing
            n >>= 1; //right swift, remove last
        }
        return count;
        // int count = __builtin_popcount(n);
        // return count;
    }
};
