class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int i, odd = 0, even = 0, n = position.size();   
        for(i = 0; i < n; i++)
        {
            if(position[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        return min(odd, even);
    }
};
