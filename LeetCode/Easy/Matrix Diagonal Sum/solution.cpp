class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int column = mat[0].size();
        int sum = 0;
        for(int i = 0 ; i < rows ; i++){
                sum += mat[i][i];
                sum += mat[i][column - 1 - i];
        }
        if(rows % 2 == 1) {
            sum -= mat[rows / 2][column / 2];
        }
        return sum;
    }
};