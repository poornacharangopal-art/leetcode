class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       vector<int>preffix_sum(nums.size());
       preffix_sum[0]=nums[0];
       for(int i=1;i<nums.size();i++){
        preffix_sum[i]=preffix_sum[i-1]+nums[i];
       }
       int count=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==k){
            count++;
        }
        for(int j=i+1;j<nums.size();j++){
            int sum;
            if(i==0){
                sum=preffix_sum[j];
            }
            else
            sum=preffix_sum[j]-preffix_sum[i-1];
            if(sum==k){
                count++;
            }
        }
       }
       return count;
    }
};