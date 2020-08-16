class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ctr = 0;
        while(n > 0)
        {
            n &= (n - 1);
            ctr++;
        }
        return ctr;
    }
};
