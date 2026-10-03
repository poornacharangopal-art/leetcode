class Solution {
public:
    void backtrack(int i,vector<int>& nums,int sum, int&target,int&count){
        if(i==nums.size()){
            if(sum==target){
                count++;
            }
            return;
        }
        int n=nums[i];
        backtrack(i+1,nums,sum+n,target,count);
        backtrack(i+1,nums,sum-n,target,count);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        int  sum=0;
        backtrack(0,nums,sum,target,count);
        return count;
    }
};