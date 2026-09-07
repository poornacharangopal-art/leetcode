class Solution {
public:
    void backtrack(int ind,vector<int>&nums,vector<int>&v,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        backtrack(ind+1,nums,v,ans);
        v.pop_back();
        backtrack(ind+1,nums,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>ans;
        backtrack(0,nums,v,ans);
        return ans;
    }
};