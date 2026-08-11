class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=0,maxi=0;
        for(int i=0;i<k;i++){
            mini+=nums[i];
            maxi+=nums[nums.size()-i-1];
        }
        return abs(maxi-mini);
    }
};