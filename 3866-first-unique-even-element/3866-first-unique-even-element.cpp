class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            if(x%2==0){
                mp[x]++;
            }
        }
        for(int x:nums){
            if(x%2==0){
                if(mp[x]==1){
                    return x;
                }
            }
        }
        return -1;
    }
};