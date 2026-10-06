class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows  = matrix.size();
        int column = matrix[0].size();
         vector<vector<int>> ans(column, vector<int>(rows));
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j< column ; j ++){
 ans[j][i] = matrix[i][j];
            }
        }
        return ans ;
    }
};