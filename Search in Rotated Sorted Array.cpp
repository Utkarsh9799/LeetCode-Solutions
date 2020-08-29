class Solution {
public:
    int binarySearch(vector<int> nums, int low, int high, int target)
    {
        while(low <= high)
        {
            int mid = (low + high) / 2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1)
        
            return (nums[0] == target) ? 0 : -1;
        
        int low = 0, high = nums.size() - 1, mid, pivot, n = nums.size() - 1;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] > nums[mid + 1])
            {
                pivot = mid;
                break;
            }
            else if(nums[mid] < nums[0])
                high = mid - 1;
            else if(nums[mid] > nums[n])
                low = mid + 1;
            else
                return binarySearch(nums, low, high, target);
        }
        return (target < nums[0]) ? binarySearch(nums, pivot + 1, n, target) : binarySearch(nums, 0, pivot, target);
    }
};
