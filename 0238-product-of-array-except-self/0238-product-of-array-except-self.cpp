class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
         int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            product*=nums[i];
            else{
                count++;
            }
        }
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            if(count>1){
                v[i]=0;
            }
            else if(count==1){
                if(nums[i]==0){
                    v[i]=product;
                }
                else{
                    v[i]=0;
                }
            }
            else{
                v[i]=product/nums[i];
            }
        }
        return v;
    }
};