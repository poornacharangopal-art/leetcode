class Solution {
public:
    vector<vector<vector<int>>>dp;//memorization
    bool dfs(int i,int j,vector<vector<char>>&grid,int balance){
         int m=grid.size(),n=grid[0].size();
         if(i>=m||j>=n)return false;
         if(grid[i][j]=='('){
            balance++;
         }
         else
         balance--;
         if(balance<0)return false;
         if(i==m-1&&j==n-1){
            return balance==0;
         }
         if(dp[i][j][balance]!=-1){
            return false;
         }
         return dp[i][j][balance] =dfs(i+1,j,grid,balance)||dfs(i,j+1,grid,balance);
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
         if (grid[0][0] == ')' || grid[m-1][n-1] == '(')
            return false;
             dp.assign(m, vector<vector<int>>(
            n, vector<int>(m + n + 1, -1)
        ));
        if(dfs(0,0,grid,0)){
            return true;
        }
        return false;
    }
};