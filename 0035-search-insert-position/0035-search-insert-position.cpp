class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                if(i==0)
                {
                    return i;
                }
                else{
                    return i;
                }
               
                }
            }
        return l;
    }
};