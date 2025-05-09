class Solution {
public:
    int hammingDistance(int x, int y) {
        int XORval = x ^ y;
        int count = 0;
        while(XORval){
            count += XORval & 1;
            XORval>>=1;
        }
        return count;
        // return __builtin_popcount(x ^ y);

    }
};
