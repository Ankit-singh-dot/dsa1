class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows * cols;

        k = k % total;

        vector<vector<int>> ans(rows, vector<int>(cols));

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                int newIndex = i * cols + j;

                int oldIndex = (newIndex - k + total) % total;

                int oldRow = oldIndex / cols;
                int oldCol = oldIndex % cols;

                ans[i][j] = grid[oldRow][oldCol];
            }
        }

        return ans;
    }
};