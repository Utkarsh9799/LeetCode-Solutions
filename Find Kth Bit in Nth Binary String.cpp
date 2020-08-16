class Solution {
public:
    string processed(string N)
    {
        for(int i = 0; i < N.length(); i++)
        {
            if(N[i] == '0')
                N[i] = '1';
            else
                N[i] = '0';
        }
        reverse(N.begin(), N.end());
        return N;
    }
    
    char findKthBit(int n, int k) {
        if(n == 1)
            return '0'; 
        
        string N = "0";
        for(int i = 1; i < n; i++)
        {
            string temp = processed(N);
            N.push_back('1');
            N.append(temp);
        }
        return N[k - 1];
    }
};
