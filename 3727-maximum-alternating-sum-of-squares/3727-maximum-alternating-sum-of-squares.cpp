class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<nums.size()/2;i++){
            ans+=nums[nums.size()-i-1]*nums[nums.size()-i-1];
            ans-=nums[i]*nums[i];
        }
        if(nums.size()%2==1){
            ans+=nums[nums.size()/2]*nums[nums.size()/2];
        }
        return ans;
    }
};