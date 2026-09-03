class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int evens=0,odds=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                evens++;
            }
            else{
                odds;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<evens){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
        return nums;
    }
};