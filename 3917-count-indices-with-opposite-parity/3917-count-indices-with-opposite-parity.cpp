class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]%2!=nums[j]%2){
                    v[i]++;
                }
            }
        }
        return v;
    }
};