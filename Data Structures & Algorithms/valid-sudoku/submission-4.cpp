// class Solution {
// public:
//     bool check(vector<vector<char>>& board, int row, int col){
//         int c=0;
//         for(int i=0;i<9;i++){
//             if(board[row][i]==board[row][col]) c++;
//             if(board[i][col]==board[row][col]) c++;
//             if(board[row][col]==board[(row/3)*3 + i/3][(col/3)*3+i%3])  c++;
//         }
//         return c==3;
//     }
//     bool isValidSudoku(vector<vector<char>>& board) {
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                  if (board[i][j]!='.' && check(board, i, j) == false)return false;
//             }
//         }
//         return true;
//     }
// };


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> st;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    char val = board[i][j];
                    string rs = "row" + to_string(i) + "_" + val;
                    string cs = "col" + to_string(j) + "_" + val;
                    string bs = "box" + to_string(i / 3) + "_" + to_string(j / 3) + "_" + val;
                    if (st.count(rs) || st.count(cs) || st.count(bs)) {
                        return false;
                    }
                    st.insert(rs);
                    st.insert(cs);
                    st.insert(bs);
                }
            }
        }
        return true;   
    }
};
