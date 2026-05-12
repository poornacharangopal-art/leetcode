class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
       int i=0;
       int j=0;
       long long  maxi=0;
       unordered_map<int,int>mp;
       long long sum=0;
       while(i<nums.size()&&j<nums.size()){
        mp[nums[j]]++;
        sum+=nums[j];
        if(j-i+1==k){
            if(mp.size()>=m){
            maxi=max(maxi,sum);
            }
            sum-=nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }
        j++;
       } 
       return maxi;
    }
};