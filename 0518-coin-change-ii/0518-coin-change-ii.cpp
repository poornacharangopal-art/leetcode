class Solution {
public:
    int bc(int i,int&sum,int&amount,vector<int>&coins,vector<vector<int>>&dp){
        if (sum == amount) {
            return 1;
        }

        if (i >= coins.size() || sum > amount)
            return 0;
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int n1=bc(i+1,sum,amount,coins,dp);
        sum+=coins[i];
        int n2=bc(i,sum,amount,coins,dp);
        sum-=coins[i];
        return dp[i][sum]=n1+n2;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int sum=0;
        int ans=bc(0,sum,amount,coins,dp);
        return ans;
    }
};