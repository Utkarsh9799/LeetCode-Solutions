class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        //if(nums.size()==2)
            //return nums[0];
        for(int i=0;i<nums.size()-1;i+=2)
        {
            sum+=nums[i];
        }
        return sum;
    }
};
