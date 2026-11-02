class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i)
{
    vector<bool> row(9, false);
    for (int j = 0; j < 9; ++j)
    {
        if (board[i][j] != '.')
        {
            if (row[board[i][j] - '1'])
            {
                // cout << "Invalid row " << i << endl;
                return false;
            }
            row[board[i][j] - '1'] = true;
        }
    }
}

// Check columns
for (int i = 0; i < 9; ++i)
{
    vector<bool> col(9, false);
    for (int j = 0; j < 9; ++j)
    {
        if (board[j][i] != '.')
        {
            if (col[board[j][i] - '1'])
            {
                // cout << "Invalid column " << i << endl;
                return false;
            }
            col[board[j][i] - '1'] = true;
        }
    }
}

// Check 3x3 boxes
for (int i = 0; i < 3; ++i)
{
    for (int j = 0; j < 3; ++j)
    {
        vector<bool> box(9, false);
        for (int k = 0; k < 3; ++k)
        {
            for (int l = 0; l < 3; ++l)
            {
                if (board[3 * i + k][3 * j + l] != '.')
                {
                    if (box[board[3 * i + k][3 * j + l] - '1'])
                    {
                        // cout << "Invalid box " << i << " " << j << endl;
                        return false;
                    }
                    box[board[3 * i + k][3 * j + l] - '1'] = true;
                }
            }
        }
    }
}
    return true;
    }
};
