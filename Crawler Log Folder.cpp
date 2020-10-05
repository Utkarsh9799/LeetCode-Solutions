class Solution {
public:
    int minOperations(vector<string>& logs) {
        int i, n = logs.size(), dist = 0;
        for(i = 0; i < n; i++)
        {
            if(logs[i] == "../")
                dist = (dist == 0) ? 0 : --dist;
            else if(logs[i] == "./")
                continue;
            else
                dist++;
        }
        return (dist < 0) ? 0 : dist;
    }
};
