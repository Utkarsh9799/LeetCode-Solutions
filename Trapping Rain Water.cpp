class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.size() <= 2)
            return 0;
        
        int i, water = 0, n = height.size(), leftMax[n], rightMax[n];
        leftMax[0] = height[0];
        rightMax[n - 1] = height[n- 1];
        
        for(i = 1; i < n; i++)
        {
            leftMax[i] = max(leftMax[i - 1], height[i]);
            rightMax[n - 1 - i] = max(rightMax[n - i], height[n - 1 - i]);
        }
        
        for(i = 0; i < n; i++)
            water += min(leftMax[i], rightMax[i]) - height[i];
        
        return water;
    }
};
