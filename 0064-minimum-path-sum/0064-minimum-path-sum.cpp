class Solution {
public:
    int backtrack(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==grid.size()-1&&j==grid[0].size()-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i+1<=grid.size()-1&&j+1<=grid[0].size()-1){
             dp[i][j]=grid[i][j]+min(backtrack(i+1,j,grid,dp),backtrack(i,j+1,grid,dp));
        }
        else if(i+1<grid.size()){
               dp[i][j]=grid[i][j]+backtrack(i+1,j,grid,dp);
        }
        else if(j+1<grid[0].size()){
              dp[i][j]=grid[i][j]+backtrack(i,j+1,grid,dp); 
        }
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return backtrack(0,0,grid,dp);  
    }
};