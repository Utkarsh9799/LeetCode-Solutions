class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
        return x;
    
        int low = 1, high = x/2, mid, root;
        while(low <= high)
        {
            mid = (low + high)/2;

            if(mid == (x/mid))
                return mid;

            if(mid < x/mid)
            {
                low = mid + 1;
                root = mid;
            }

            else
            {
                high = mid - 1;
            }
        }
        return root;    
    }
};
