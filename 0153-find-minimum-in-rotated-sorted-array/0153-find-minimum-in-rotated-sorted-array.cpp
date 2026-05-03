class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int rotate=0;
        int right=nums.size()-1;
        while(left!=right){
            if(nums[left]>nums[right]){
                rotate++;
                left++;
            }
            else{
                right--;
            }
        }
        return nums[left];
    }
};