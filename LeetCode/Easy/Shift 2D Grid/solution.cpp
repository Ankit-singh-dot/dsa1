class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int cols = grid[0].size();
        int total = row * cols;
        k = k % total;
        vector<int> temp;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j<cols ; j++){
                temp.push_back(grid[i][j]);
            }
        }
        rotate(temp.begin(), temp.end() - k , temp.end());
        int index = 0 ; 
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j< cols ; j++){
                grid[i][j] = temp[index++];
            }
        }
        return grid ; 
    }
};