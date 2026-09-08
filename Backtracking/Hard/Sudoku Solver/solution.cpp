class Solution {
public:
    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {

                // Skip already filled cells
                if (board[row][col] != '.') {
                    continue;
                }

                // Try digits 1 to 9
                for (char num = '1'; num <= '9'; num++) {

                    if (isValid(board, row, col, num)) {
                        board[row][col] = num;

                        // Continue solving
                        if (solve(board)) {
                            return true;
                        }

                        // Wrong choice, undo it
                        board[row][col] = '.';
                    }
                }

                // No number works here
                return false;
            }
        }

        // No empty cells left
        return true;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char num) {

        // Check row
        for (int j = 0; j < 9; j++) {
            if (board[row][j] == num) {
                return false;
            }
        }

        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) {
                return false;
            }
        }

        // Check 3 x 3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (board[i][j] == num) {
                    return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};