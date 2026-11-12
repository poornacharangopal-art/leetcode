class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=INT_MIN;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
            }
            else{
                ans=max(ans,count);
                count=1;
            }
        }
        ans=max(count,ans);
        count=1;
          for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                count++;
            }
            else{
                ans=max(ans,count);
                count=1;
            }
        }
        ans=max(count,ans);
        count=0;
        return ans;
    }
};