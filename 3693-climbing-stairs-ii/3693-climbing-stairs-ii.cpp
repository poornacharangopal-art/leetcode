class Solution {
public: 
    int backtrack(int i,int n,vector<int>&costs,vector<int>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=INT_MAX;
         for (int j = 1; j <= 3; j++) {
            if (i + j <= n) {
                int newCost = costs[i + j - 1] + j * j;
                  int remaining = backtrack(i + j, n, costs, dp);

                if (remaining != INT_MAX) {
                    ans = min(ans, newCost + remaining);
                }
            }
        }
        return dp[i]=ans;
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return backtrack(0,n,costs,dp);
    }
};