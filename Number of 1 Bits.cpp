class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ctr = 0;
        while(n > 0)
        {
            ctr += (n & 1);
            n >>= 1;
        }
        return ctr;
    }
};
