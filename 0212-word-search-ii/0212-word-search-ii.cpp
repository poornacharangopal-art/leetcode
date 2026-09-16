class Solution {
public:
    void backtrack(int i,int j,string &s,vector<vector<char>>& board,
                   unordered_set<string>& words, unordered_set<string>& prefixes,unordered_set<string>& ans,
                   vector<vector<int>>& visited){

        s += board[i][j];
        if(prefixes.find(s)==prefixes.end()){
            s.pop_back();
            return;
        }
        if(words.find(s)!=words.end()){
            ans.insert(s);
        }

        if(i-1>=0&&visited[i-1][j]!=1){
            visited[i-1][j]=1;
            backtrack(i-1,j,s,board,words,prefixes,ans,visited);
            visited[i-1][j]=0;
        }

        if(i+1<board.size()&&visited[i+1][j]!=1){
            visited[i+1][j]=1;
            backtrack(i+1,j,s,board,words,prefixes,ans,visited);
            visited[i+1][j]=0;
        }

        if(j-1>=0&&visited[i][j-1]!=1){
            visited[i][j-1]=1;
            backtrack(i,j-1,s,board,words,prefixes,ans,visited);
            visited[i][j-1]=0;
        }

        if(j+1<board[0].size()&&visited[i][j+1]!=1){
            visited[i][j+1]=1;
            backtrack(i,j+1,s,board,words,prefixes,ans,visited);
            visited[i][j+1]=0;
        }

        s.pop_back();
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {

        unordered_set<string> wordset(words.begin(),words.end());
        unordered_set<string> ans;
        unordered_set<string> prefixes;

        string s = "";

        vector<vector<int>> visited(
            board.size(),
            vector<int>(board[0].size(),0)
        );
          for(string word : words){
            string p = "";

            for(char c : word){
                p += c;
                prefixes.insert(p);
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){

                visited[i][j]=1;

                backtrack(i,j,s,board,wordset,prefixes,ans,visited);

                visited[i][j]=0;
            }
        }

        vector<string> a(ans.begin(),ans.end());

        return a;
    }
};