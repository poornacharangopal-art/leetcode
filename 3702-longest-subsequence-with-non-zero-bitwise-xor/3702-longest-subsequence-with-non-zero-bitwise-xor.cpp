class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        bool zero=true;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
            if(nums[i]!=0)zero=false;
        }
        if(zero)return 0;
        else if(x!=0)return nums.size();
        return nums.size()-1;
    }
};