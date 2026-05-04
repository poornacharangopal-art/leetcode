class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(mid%2==1){
                if(nums[mid]==nums[mid+1]){
                    right=mid-1;
                }
                else if(nums[mid]==nums[mid-1]){
                    left=mid+1;
                }
                else{
                    return nums[mid];
                }
            }
            else{
                if(mid!=0&&mid!=nums.size()-1&&nums[mid]==nums[mid-1]){
                    right=mid-1;
                }
                else if(nums[mid]==nums[mid+1]){
                    left=mid+1;
                }
                else{
                    return nums[mid];
                }
            }
        }
        return 0;
    }
};