class Solution {
public:
   void backtrack(int i,vector<int>&nums,vector<int>&v,set<vector<int>>&s){
    if(i==nums.size())
    return;
    backtrack(i+1,nums,v,s);
    if(v.size()==0){
        v.push_back(nums[i]);
         backtrack(i+1,nums,v,s);

            v.pop_back();
    }
    else {
        if(nums[i]>=v[v.size()-1]){
        v.push_back(nums[i]);
        s.insert(v);
        backtrack(i+1,nums,v,s);
        v.pop_back();
    }
    }
   }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>v;
        set<vector<int>>s;
        backtrack(0,nums,v,s);
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};