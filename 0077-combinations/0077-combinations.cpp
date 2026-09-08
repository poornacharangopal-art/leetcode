class Solution {
public:
   void backtrack(int pos,vector<int>&nums,vector<int>&v,vector<vector<int>>&ans,int k){
    if(v.size()==k){
        ans.push_back(v);
        return;
    }
    if(pos==nums.size()){
        return;
    }
    v.push_back(nums[pos]);
    backtrack(pos+1,nums,v,ans,k);
    v.pop_back();
    backtrack(pos+1,nums,v,ans,k);
   }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        vector<int>v;
        vector<vector<int>>ans;
        backtrack(0,nums,v,ans,k);
        return ans;
    }
};