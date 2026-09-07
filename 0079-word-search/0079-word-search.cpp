class Solution {
public:
    bool wordsearch(int i,int j,vector<vector<char>>& board, string word,int pos){
        int n=board.size(),m=board[0].size();
        if(board[i][j]!=word[pos]){
            return false;
        }
        if(pos==word.size()-1){
            return true;
        }
          char ch=board[i][j];
         board[i][j] = '#';

        if(i+1<n&& board[i+1][j] !='#'&&board[i+1][j]==word[pos+1]&&wordsearch(i+1,j,board,word,pos+1)){
            return true;
        }
        if(j+1<m&&board[i][j+1] !='#'&&board[i][j+1]==word[pos+1]&&wordsearch(i,j+1,board,word,pos+1)){
            return true;
        }
        if(j-1>=0&&board[i][j-1] != '#'&&board[i][j-1]==word[pos+1]&&wordsearch(i,j-1,board,word,pos+1)){
            return true;
        }
        if(i-1>=0&&board[i-1][j] !='#'&&board[i-1][j]==word[pos+1]&&wordsearch(i-1,j,board,word,pos+1)){
            return true;
        }
        board[i][j]=ch;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
         int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( wordsearch(i,j,board,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};