class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=1,c=2;
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==a){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==b){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};