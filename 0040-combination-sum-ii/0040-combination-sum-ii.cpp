class Solution {
public:
     void getcombination(int ind,int target,vector<int>&candidates,vector<int>&v,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>ind&&candidates[i]==candidates[i-1])continue;
            if(candidates[i] > target)
                break;
            v.push_back(candidates[i]);
            getcombination(i+1,target-candidates[i],candidates,v,ans);
            v.pop_back();
        }
     }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
         vector<vector<int>>ans;
        vector<int>v;
        getcombination(0,target,candidates,v,ans);
        return ans;
    }
};