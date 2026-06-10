class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int diff=nums[nums.size()-1]-nums[0];
        long long ans=(long long)k*diff;
        return ans;
    }
};