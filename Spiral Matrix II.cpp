class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n == 1)
            return {{1}};
        
        vector<vector<int>> matrix(n, vector<int> (n));
        int dir = 0, i, T = 0, B = n - 1, L = 0, R = n - 1, val = 1;
        while(T <= B && L <= R)
        {
            if(dir == 0)
            {
                for(i = L; i <= R; i++)
                {
                    matrix[T][i] = val;
                    val++;
                }
                T++;
            }
            if(dir == 1)
            {
                for(i = T; i <= B; i++)
                {
                    matrix[i][R] = val;
                    val++;
                }
                R--;
            }
            if(dir == 2)
            {
                for(i = R; i >= L; i--)
                {
                    matrix[B][i] = val;
                    val++;
                }
                B--;
            }
            if(dir == 3)
            {
                for(i = B; i >= T; i--)
                {
                    matrix[i][L] = val;
                    val++;
                }
                L++;
            }
            dir = (dir + 1) % 4;
        }
        return matrix;
    }
};
