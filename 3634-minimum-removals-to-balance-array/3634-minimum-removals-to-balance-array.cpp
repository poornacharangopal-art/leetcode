class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
         sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=0,maxDist=0;
        for(int i=0;i<n;i++){
            while(j<n && 1LL*nums[i]*k >= 1LL*nums[j]) j++;
            maxDist=max(maxDist,j-i);
        }
        return n-maxDist;
    }
};