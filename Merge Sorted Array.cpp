class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, t = m;
        while(i < (m + n) && j < n)
        {
            if(nums1[i] >= nums2[j])
            {
                nums1.insert(nums1.begin() + i++, nums2[j++]);
                nums1.pop_back();
                t++;
            }
            else if(nums1[i] < nums2[j] && i < t)
                i++;
            else
                nums1[i++] = nums2[j++];
        }
    }
};
