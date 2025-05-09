class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for(int i =0;i<32;i++){
            int bit = n & 1;
            result = (result<<1) | bit; // | means +, add the extracted bit to the result;
            n >>= 1; // right swift to move further
        }
        return result;
     //return  __builtin_bitreverse32(n);    
    }
};
