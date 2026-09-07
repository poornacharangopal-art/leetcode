class Solution {
public:
    void combination(int ind,int k,int n,vector<int>&nums,vector<int>&v,vector<vector<int>>&ans){
        if(v.size() == k) {
            if(n == 0) {
                ans.push_back(v);
            }
            return;
        }

        for(int i=ind;i<nums.size();i++){
            if(i>ind&&nums[i]==nums[i-1])continue;
            if(nums[i]>n){
                break;
            }
            v.push_back(nums[i]);
            combination(i+1,k,n-nums[i],nums,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        for(int i=0;i<9;i++){
            nums.push_back(i+1);
        }
        vector<vector<int>>ans;
        vector<int>v;
        combination(0,k,n,nums,v,ans);
        return ans;
    }
};