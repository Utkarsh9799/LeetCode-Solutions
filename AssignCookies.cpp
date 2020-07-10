class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size() == 0)
            return 0;
        
        int ctr = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        size_t i = 0, j = 0;
        while(i < g.size() && j < s.size())
        {
            if(g[i] > s[j])
            {
                j++;
                continue;
            }
            else
            {
                ctr++; 
                i++;
                j++;
            }
        }
        return ctr;
    }
};
