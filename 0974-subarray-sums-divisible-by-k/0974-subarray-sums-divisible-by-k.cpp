class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int count=0;
        int preffix=0;
        for(int num:nums){
            preffix+=num;
            int rem=((preffix%k)+k)%k;
            count+=mp[rem];
            mp[rem]++;
        }
       return count;
    }
};