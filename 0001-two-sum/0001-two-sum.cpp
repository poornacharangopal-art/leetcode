class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num;
        vector<int>num1(2,0);
           for(int i=0;i<nums.size();i++){
            num=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==num)
                {
                    num1[0]=i;
                    num1[1]=j;
                    return num1;
                }
            }
        }
        return num1;
        
    }
};