class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num;
        for(int i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!=nums[i+1]){
                num=nums[i];
                return num;
            }
        }
        return nums[nums.size()-1];
        
    }
};