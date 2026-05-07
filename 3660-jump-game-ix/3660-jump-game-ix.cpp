class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        vector<int>maxi(nums.size());
        vector<int>small(nums.size());
        maxi[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            maxi[i]=max(maxi[i-1],nums[i]);
        }
        small[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            small[i]=min(nums[i],small[i+1]);
        }
        vector<int>ans(nums.size());
        ans[nums.size()-1]=maxi[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(maxi[i]>small[i+1]){
                ans[i]=ans[i+1];
            }
            else{
                ans[i]=maxi[i];
            }
        }
        return ans;
    }
};