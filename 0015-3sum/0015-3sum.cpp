class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<l-1;i++){
            if(i > 0&& nums[i] == nums[i -1])
                continue;
            int left=i+1;
            int right=l-1;
            while(left<right){
                int sum=nums[left]+nums[i]+nums[right];
                if(sum==0){
                    ans.push_back({nums[left],nums[i],nums[right]});
                    while(left<l-1&&nums[left+1]==nums[left]){
                        left++;
                    }
                    while(right>0&&nums[right-1]==nums[right]){
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return ans;
    }
};