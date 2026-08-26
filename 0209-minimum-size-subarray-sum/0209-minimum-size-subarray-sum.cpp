class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int sum=0;
        int mini=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum>=target){
                mini=min(mini,j-i+1);
                while(i<j&&sum>=target){
                    sum-=nums[i];
                    i++;
                    if(sum>=target){
                         mini=min(mini,j-i+1);
                    }
                }
            }
            j++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
    }
};