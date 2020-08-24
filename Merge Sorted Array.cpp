class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged(n + m);
        int i = 0, j = 0, t = 0;
        while(j < n && i < m)
        {
            if(nums1[i] < nums2[j])
                merged[t++] = nums1[i++];
            else
                merged[t++] = nums2[j++];
        }
        while(i < m)
            merged[t++] = nums1[i++];
        while(j < n)
            merged[t++] = nums2[j++];
        nums1 = merged;
    }
};
