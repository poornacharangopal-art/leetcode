class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num;
        if(nums[0]!=0){
            return 0;
        }
        else if(nums.size()==1){
            return nums[0]+1;
        }
          for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1){
                if(nums[i+1]-nums[i]!=1){
                    num=nums[i]+1;
                    break;
                }
            }
            else if(i=nums.size()-1){
                return nums[nums.size()-1]+1;
            }
        }
        return num;
    }
};