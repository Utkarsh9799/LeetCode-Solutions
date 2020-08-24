class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        vector<int> vec(n);
        int i = 0, j, x = 0;
        while(i < n && A[i] < 0)
            i++;
        j = i - 1;
        while(j >= 0 && i < n)
        {
            if(abs(A[i]) < abs(A[j]))
            {
                vec[x++] = A[i] * A[i];
                i++;
            }
            else
            {
                vec[x++] = A[j] * A[j];
                j--;
            }
        }
        while(j >= 0)
        {
            vec[x++] = A[j] * A[j];
            j--;
        }
        while(i < A.size())
        {
            vec[x++] = A[i] * A[i];
            i++;
        }
        return vec;
    }
};
