class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return true;
            }
            if(nums[i]>target){
                return false;
            }
        }
        return false;
    }
};