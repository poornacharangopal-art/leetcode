class Solution {
public:
      int backtrack(int i,vector<int>&coins,long long sum,int&amount,vector<vector<int>>&dp){
        if(i==coins.size()){
            return INT_MAX;
        }
        if(sum>amount){
            return INT_MAX;
        }
        if (sum == amount) {
    return 0;
}
        if(dp[i][amount-sum]!=-1){
            return dp[i][amount-sum];
        }
        int take =  backtrack(i, coins, sum + coins[i], amount, dp);
        if (take != INT_MAX) {
    take++;
}
        int skip = backtrack(i + 1, coins, sum, amount, dp);
        return dp[i][amount-sum]=min(take, skip);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans=backtrack(0,coins,0,amount,dp);
        if(ans==INT_MAX||ans==INT_MAX-1){
            return -1;
        }
        return ans;
    }
};