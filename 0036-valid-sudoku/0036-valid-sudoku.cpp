class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,int>mp;
            for(int j=0;j<9;j++){
                if(mp.count(board[i][j]))return false;
                else{
                    if(isdigit(board[i][j])){
                        mp[board[i][j]]++;
                    }
                }
            }
        }
         for(int i=0;i<9;i++){
            unordered_map<char,int>mp;
            for(int j=0;j<9;j++){
                if(mp.count(board[j][i]))return false;
                else{
                    if(isdigit(board[j][i])){
                        mp[board[j][i]]++;
                    }
                }
            }
        }
        for (int row = 0; row < 9; row += 3) {
    for (int col = 0; col < 9; col += 3) {

        unordered_map<char, int> mp;

        for (int i = row; i < row + 3; i++) {
            for (int j = col; j < col + 3; j++) {

                if (isdigit(board[i][j])) {
                    if (mp.count(board[i][j]))
                        return false;
                    mp[board[i][j]]++;
                }

            }
        }

    }
}
        return true;   
    }
};