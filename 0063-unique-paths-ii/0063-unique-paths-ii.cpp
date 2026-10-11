class Solution {
public:
   int n,m;
    int backtrack(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp){
          if(i >= n || j >= m) {
            return 0;
        }
        if(nums[i][j]==1){
            return 0;
        }
        if(i==n-1&&j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j]=backtrack(i,j+1,nums,dp)+backtrack(i+1,j,nums,dp);
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         n = obstacleGrid.size();
        m = obstacleGrid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return backtrack(0, 0, obstacleGrid, dp);
    }
};