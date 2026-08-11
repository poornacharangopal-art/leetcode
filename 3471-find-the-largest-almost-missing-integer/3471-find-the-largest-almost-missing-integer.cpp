class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int>v(51,0);
        for(int num:nums){
            v[num]++;
        }
        if(k==nums.size()){
            int maxi=INT_MIN;
            for(int i=0;i<nums.size();i++){
                maxi=max(maxi,nums[i]);
            }
            return maxi;
        }
        else if(k==1){
            int maxi=INT_MIN;
            for(int i=0;i<nums.size();i++){
                if(v[nums[i]]==1)
                maxi=max(maxi,nums[i]);
            }
            if(maxi==INT_MIN){
                return -1;
            }
            return maxi;
        }
        if(v[nums[nums.size()-1]]>1&&v[nums[0]]>1){
            return -1;
        }
        else if(v[nums[nums.size()-1]]>1){
            return nums[0];
        }
        else if(v[nums[0]]>1){
            return nums[nums.size()-1];
        }
            return max(nums[0],nums[nums.size()-1]);
    }
};