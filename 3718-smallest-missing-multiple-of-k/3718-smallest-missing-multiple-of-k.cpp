class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        bool isok=true;
        int i=k;
        while(isok){
            if(!mp.count(i))
            isok=false;
            else
            i+=k;
        }
        return i;
    }
};