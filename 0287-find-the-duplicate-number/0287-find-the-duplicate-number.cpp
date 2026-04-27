class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int ans;
        for(auto&p:mp){
            if(p.second>1){
                ans=p.first;
            }
        }
        return ans;
    }
};