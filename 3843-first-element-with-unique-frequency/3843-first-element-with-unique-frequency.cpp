class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int x:nums){
            mp1[x]++;
        }
        for(auto&p:mp1){
            mp2[p.second]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp2[mp1[nums[i]]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};