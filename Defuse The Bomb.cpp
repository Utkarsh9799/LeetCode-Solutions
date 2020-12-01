class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int i, n = code.size();
        vector<int> ans(n);
        if(k == 0)
            return ans;
        else if(k == n)
            return code;
        else if(k > n)
            k %= n;
        else
            k %= -n;
        for(i = 0; i < n; i++)
        {
            int temp = k;
            if(temp > 0)
            {
                int idx = i + 1;
                while(temp--)
                {
                    ans[i] += code[idx % n];
                    idx++;
                }
            }
            else
            {
                int idx = i - 1;
                while(temp++ < 0)
                {
                    if(idx < 0)
                        ans[i] += code[n + idx];
                    else
                        ans[i] += code[idx];
                    idx--;
                }
            }
        }
        return ans;
    }
};
