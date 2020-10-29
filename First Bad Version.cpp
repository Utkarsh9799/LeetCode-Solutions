// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0, high = n;
        while(low <= high)
        {
            int mid = (high - low) / 2 + low;
            if(isBadVersion(mid) && !isBadVersion(mid - 1))
                return mid;
            else if(!isBadVersion(mid))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
