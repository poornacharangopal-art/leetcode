class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=0;
        vector<int>maxi(nums.size());
        maxi[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            maxi[i]=max(maxi[i+1],nums[i]);
        }
        for(int j=0;j<nums.size()-k;j++){
            ans=max(ans,nums[j]+maxi[j+k]);
        }
        return ans;
    }
};