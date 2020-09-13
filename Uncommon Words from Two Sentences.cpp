class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> ans;
        unordered_map<string, int> m;
        int i = 0, a = A.length(), b = B.length();
        while(i < a)
        {
            int temp = i;
            while(A[i] != ' ' && i < a)
                i++;
            string word;
            for(int j = temp; j < i; j++)
                word += A[j];
            if(m.find(word) != m.end())
                m[word]++;
            else
                m[word]++;
            i++;
        }
        i = 0;
        while(i < B.length())
        {
            int temp = i;
            while(B[i] != ' ' && i < b)
                i++;
            string word;
            for(int j = temp; j < i; j++)
                word += B[j];
            if(m.find(word) != m.end())
                m[word]++;
            else
                m[word]++;
            i++;
        }
        for(auto i : m)
        {
            if(i.second == 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};
