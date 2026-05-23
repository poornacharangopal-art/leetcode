class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        if(v==nums){
            return true;
        }
        vector<int>v1=nums;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+1,nums.end());
        while(nums!=v1){
            if(nums==v){
                return true;
            }
             reverse(nums.begin(),nums.end());
             reverse(nums.begin()+1,nums.end());
        }
        return false;
    }
};