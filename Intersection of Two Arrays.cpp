class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), i;
        vector<int> intersection;
        unordered_set<int> S;
        for(i = 0; i < m; i++)
            S.insert(nums1[i]);
        
        for(i = 0; i < n; i++)
        {
            if(S.find(nums2[i]) != S.end())
            {
                intersection.push_back(nums2[i]);
                S.erase(nums2[i]);
            }
        }
        return intersection;
    }
};
