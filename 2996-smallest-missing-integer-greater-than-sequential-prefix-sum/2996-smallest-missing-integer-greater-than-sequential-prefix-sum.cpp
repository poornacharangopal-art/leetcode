class Solution {
public:
    int missingInteger(vector<int>& nums) {
       int sum=nums[0];
       int i=1;
       unordered_map<int,int>mp;
       for(int num:nums){
        mp[num]++;
       }
        while(i<nums.size()&&nums[i]==nums[i-1]+1){
            sum+=nums[i];
            i++;
        }
       int n=sum;
       while(mp.count(n)){
        n++;
       }
       return n;
    }
};