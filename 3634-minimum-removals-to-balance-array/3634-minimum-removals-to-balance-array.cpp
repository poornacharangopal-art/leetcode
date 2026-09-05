class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int j=0;
        for(int i=0;i<nums.size();i++){
            int count=i;
            while(j<nums.size()&&1LL*nums[j]<=1LL*k*nums[i]){
                j++;
            }
            count+=nums.size()-j;
            mini=min(count,mini);
        }
        return mini;
    }
};