class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()/3;
        long long sum=0;
        int idx=nums.size()-2;
        while(n--){
            sum+=nums[idx];
            idx-=2;
        }
        return sum;
    }
};