class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        dfs(ans, 0, nums, current);
        return ans;
    }
private:
    void dfs(vector<vector<int>>& ans, int idx, vector<int> nums, vector<int>& current) 
    {
        ans.push_back(current);
        for(int i = idx; i < nums.size(); i++)
        {
            current.push_back(nums[i]);
            dfs(ans, i + 1, nums, current);
            current.pop_back();
        }
    }
};
