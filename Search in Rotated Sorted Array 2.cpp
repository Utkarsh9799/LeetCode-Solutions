class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(!nums.size())
            return false;
        
        if(nums.size() == 1)
            return (nums[0] == target);
        
        int low = 0, high = nums.size() - 1, pivot, mid;
        
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(nums[mid] == target || nums[low] == target || nums[high] == target)
                return true;
            else if(nums[mid] > nums[low])
            {
                if(target > nums[low] && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else if(nums[mid] < nums[high])
            {
                if(target > nums[mid] && target < nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            else
            {
                low++;
                high--;
            }
        }
        return false;
    }
};
