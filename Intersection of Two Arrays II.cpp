class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), i;
        vector<int> intersection;
        unordered_map<int, int> M;
        for(i = 0; i < m; i++)
            M[nums1[i]]++;
        
        for(i = 0; i < n; i++)
        {
            if(M.find(nums2[i]) != M.end())
            {
                if(M[nums2[i]] > 0)
                {
                    intersection.push_back(nums2[i]);
                    M[nums2[i]]--;
                }
            }
        }
        return intersection;
    }
};
