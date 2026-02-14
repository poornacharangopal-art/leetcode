class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        if(nums.size()==1){
            return 0;
        }
        for(i=0;i<nums.size();i++){
            if(i!=0&&i!=nums.size()-1&&nums[i]>nums[i+1]&&nums[i]>nums[i-1]){
                return i;
            }
            else if(i==0&&nums[i]>nums[i+1]){
                return 0;
            }
            else if(i==nums.size()-1&&nums[i]>nums[i-1]){
                return i;
            }
        }
          return 0;
    }

};