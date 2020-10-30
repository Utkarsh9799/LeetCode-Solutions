class Solution {
public:
    int hammingDistance(int x, int y) {
        int ctr = 0, bits = x ^ y;
        while(bits != 0)
        {
            if(bits & 1)
                ctr++;
            
            bits = bits >> 1;
        }
        return ctr;
    }
};
