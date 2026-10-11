class Solution {
public:
    int backtrack(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=nums[i]+backtrack(i+2,nums,dp);
        int nottake=backtrack(i+1,nums,dp);
        return dp[i]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>nums1(nums.begin(),nums.end()-1);
        vector<int>nums2(nums.begin()+1,nums.end());
        vector<int>dp1(nums.size(),-1),dp2(nums.size(),-1);
        int ans1=backtrack(0,nums1,dp1);
        int ans2=backtrack(0,nums2,dp2);
        int ans=max(ans1,ans2);
        return ans;
    }
};