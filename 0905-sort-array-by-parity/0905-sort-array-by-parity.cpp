class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>nums1=nums;
        for(int i=nums1.size()-1;i>=0;i--){
            if(nums1[i]%2==0){
                nums1.erase(nums1.begin()+i);
            }
        }
        vector<int>p=nums1;
          for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                p.push_back(nums[i]);
            }
        }
        reverse(p.begin(),p.end());
        return p;
    }
};