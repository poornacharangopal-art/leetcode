class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for( int j=i;j<nums.size();j++){
                sum+=nums[j];
                int rem=nums[i]%k;
                int len=j-i+1;
                if(nums[j]%k!=rem){
                    break;
                }
                if ((sum - nums[i]) % k == 0 &&
                    (sum - nums[j]) % k == 0) {
                    ans = max(ans, len);
                }
            }
        }
        return ans;
    }
};