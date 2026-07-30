class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        int maxi=0,mini=0;
        for(int i=0;i<nums.size();i++){
            maxi=nums[i];
            mini=nums[i];
            for(int j=i+1;j<nums.size();j++){
                maxi=max(nums[j],maxi);
                mini=min(nums[j],mini);
                ans+=maxi-mini;
            }
        }
        return ans;
    }
};