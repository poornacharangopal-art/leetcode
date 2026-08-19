class Solution {
public:
void subset(vector<int>& nums,vector<vector<int>>&ans,int i,vector<int>&v){
    i++;
    while(i<nums.size()){
        v.push_back(nums[i]);
        ans.push_back(v);
        subset(nums,ans,i,v);
        v.pop_back();
        int curr=nums[i];
        while(i<nums.size()&&nums[i]==curr){
            i++;
        }
        i--;
        i++;
    }
   }
    vector<vector<int>> subsets(vector<int>& nums) {
           sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>p;
        ans.push_back(p);
        int i=0;
        while(i<nums.size()){
            vector<int>v;
            v.push_back(nums[i]);
            ans.push_back(v);
            subset(nums,ans,i,v);
            while(i<nums.size()-1&&nums[i]==nums[i+1]){
                i++;
            }
            i++;
        }
        return ans;
    }
};