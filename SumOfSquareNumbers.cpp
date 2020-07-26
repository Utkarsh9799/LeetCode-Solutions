class Solution {
public:
    bool judgeSquareSum(int c) {
        int low = 0, high = sqrt(c);
        
        while(low <= high)
        {
            if(low * low > INT_MAX - high * high)
                return false;
            
            int sqr = low * low + high * high;
            
            if(sqr == c)
                return true;
            
            if(sqr < c)
                low++;
            else
                high--;
        }
        return false;
    }
};
