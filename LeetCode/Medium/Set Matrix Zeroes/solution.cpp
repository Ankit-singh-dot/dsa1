class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> zeroRows;
        vector<int> zeroCols;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                if(matrix[i][j] == 0) {
                    zeroRows.push_back(i);
                    zeroCols.push_back(j);
                }

            }
        }
        for(int i = 0 ; i < rows ; i++){
             for(int j = 0; j < cols; j++){
                if(find(zeroRows.begin(), zeroRows.end(), i) != zeroRows.end() ||
                   find(zeroCols.begin(), zeroCols.end(), j) != zeroCols.end()) {

                    matrix[i][j] = 0;
                }

             }
        }
    }
};