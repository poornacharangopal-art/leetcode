class Solution {
public:
    int solve(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()-1){
            return 0;
        }
        if(dp[i]!=INT_MAX){
            return dp[i];
        }
        for(int j=1;j<=nums[i];j++){
            int res = solve(i + j, nums, dp);

            if (res != INT_MAX) {
                dp[i] = min(dp[i], 1+ res);
            }
        }
        return dp[i];
    }
    int jump(vector<int>& nums) {
         vector<int> dp(nums.size(), INT_MAX);
        return solve(0, nums, dp);
    }
};