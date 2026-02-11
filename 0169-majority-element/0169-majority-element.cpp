class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1,num;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count+=1;
            }
            else{
                count=1;
            }
            if(count>nums.size()/2){
                num=nums[i];
            }
        }
        return num;

    }
};