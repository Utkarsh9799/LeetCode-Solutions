class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1 || nums.front() < nums.back())
            return nums[0];
        
        int low = 0, high = nums.size() - 1, mid, pivot;
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            else if(nums[mid] < nums[0])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return nums[mid + 1];
    }
};
