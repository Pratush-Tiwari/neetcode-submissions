class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        for(int i=0;i<9;i++){
        unordered_map<char,int> mpr;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(mpr[board[i][j]] == 1) return false;
                    mpr[board[i][j]]++;
                }
            }
        }

        for(int i=0;i<9;i++){
        unordered_map<char,int> mpc;
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    if(mpc[board[j][i]]==1) return false;
                    mpc[board[j][i]]++;
                }
            }
        }

        for(int i=0;i<3;i++){
            for(int l=0;l<3;l++){
                unordered_map<char,int> mp;
                for(int j=0;j<3;j++){
                    for(int k=0;k<3;k++){
                        if(board[i*3+j][l*3+k]!='.'){
                            if(mp.count(board[i*3+j][l*3+k])) return false;
                            mp[board[i*3+j][l*3+k]]++;
                        }
                    }
                }
            }
        }
        return true;
    }
};
