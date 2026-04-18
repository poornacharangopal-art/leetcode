class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=nums[0]*nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums.size()%(i+1)==0){
                sum+=nums[i]*nums[i];
            }
        }
        return sum;
    }
};