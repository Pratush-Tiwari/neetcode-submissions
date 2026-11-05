class Solution {
public:
    bool check(vector<vector<char>> board, int row, int col){
        int c=0;
        for(int i=0;i<9;i++){
            if(board[row][i]==board[row][col]) c++;
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==board[row][col]) c++;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[row][col]==board[(row/3)*3 + i][(col/3)*3+j])  c++;
            }
        }
        return c==3;

    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                 if (board[i][j]!='.' && check(board, i, j) == false)return false;
            }
        }
        return true;
    }
};
