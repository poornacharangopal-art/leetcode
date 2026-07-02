class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        if(nums.size()%k!=0)
        return false;
        else{
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
            int n=nums.size()/k;
            for(auto&p:mp){
                if(p.second>n){
                    return false;
                }
            }
        }
        return true;
    }
};