class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.') {
                    continue;
                }

                char num = board[r][c];

                int box = (r / 3) * 3 + (c / 3);

                if (rows[r].find(num) != rows[r].end() ||
                    cols[c].find(num) != cols[c].end() ||
                    boxes[box].find(num) != boxes[box].end()) {
                    return false;
                }

                rows[r].insert(num);
                cols[c].insert(num);
                boxes[box].insert(num);
            }
        }

        return true;
    }
};