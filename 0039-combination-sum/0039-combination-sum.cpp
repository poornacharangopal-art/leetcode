class Solution {
public:
    void getcombination(int ind,int target,vector<int>&candidates,vector<int>&v,vector<vector<int>>&ans){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[ind]<=target){
            v.push_back(candidates[ind]);
            getcombination(ind,target-candidates[ind],candidates,v,ans);
            v.pop_back();
        }
         getcombination(ind+1,target,candidates,v,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        getcombination(0,target,candidates,v,ans);
        return ans;
    }
};