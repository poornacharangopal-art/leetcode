class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()/2;
        int i=0,sum=0;
        while(i<=nums.size()-2){
            sum+=min(nums[i],nums[i+1]);
            i=i+2;
        }
        return sum;
    }
};