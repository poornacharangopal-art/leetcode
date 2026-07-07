class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int k=nums[nums.size()/2];
        for(int i=0;i<nums.size()/2;i++){
            if(nums[i]==k||nums[i+(nums.size()/2)+1]==k)return false;
        }
        return true;
    }
};