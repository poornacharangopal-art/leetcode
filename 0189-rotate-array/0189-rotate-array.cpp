class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()>=k){
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        }
        else{
             for(int i=0;i<k;i++){
            int n=nums[nums.size()-1];
            nums.erase(nums.begin()+nums.size()-1);
             nums.insert(nums.begin(),n);
        }
    }
    }
    
};