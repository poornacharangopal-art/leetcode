class Solution {
public:
    bool backtrack(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()-1){
            return true;
        }
        if(nums[i]==0){
            return false;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=1;j<=nums[i];j++){
            if(backtrack(i+j,nums,dp)){
                dp[i]=1;
                return true;
            }
        }
        dp[i]=0;
        return false;
    }
    bool canJump(vector<int>& nums) {
         vector<int> dp(nums.size(), -1);
        return backtrack(0, nums, dp);
    }
};