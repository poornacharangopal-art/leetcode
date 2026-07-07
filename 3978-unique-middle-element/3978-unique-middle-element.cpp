class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int i=nums.size()/2;
        if(mp[nums[i]]==1){
            return true;
        }
        return false;
    }
};