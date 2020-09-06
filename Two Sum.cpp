class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> S;
        for(int i = 0; i < nums.size(); i++)
        {
            S.insert(nums[i]);
            if(S.find(target - nums[i]) != S.end())
            {
                for(int j = i - 1; j >= 0; j--)
                {
                    if(nums[j] == (target - nums[i]))
                        return {j, i};
                }
            }
        }
        return {};
    }
};
