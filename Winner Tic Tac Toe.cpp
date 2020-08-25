class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> grid(3, vector<char>(3, '0'));
            char curr = 'A'; 
            for(auto& p : moves)
            {
                grid[p.front()][p.back()] = curr;
                curr = curr == 'A' ? 'B' : 'A';
            }
            
            for(int i = 0; i < 3; ++i )
            {
                if(grid[i][0] != '0' && grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2])   
                    return {grid[i][0]};
                if(grid[0][i]!= '0' && grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i])     
                    return {grid[0][i]};
            }
            if(grid[0][0] != '0' && grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) 
                return {grid[0][0]};
            if(grid[0][2] != '0' && grid[0][2] == grid[1][1]  && grid[1][1] == grid[2][0]) 
                return {grid[0][2]};
            
            return moves.size() == 9 ? "Draw" : "Pending";
    }
};
