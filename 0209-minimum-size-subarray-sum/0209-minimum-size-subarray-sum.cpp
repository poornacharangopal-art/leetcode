class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int count=0;
        int sum=0;
        int min=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum>=target){
                if(j-i+1<min){
                    min=j-i+1;
                }
                i++;
                j=i;
                sum=0;
                count=0;
                continue;
            }
            j++;
        }
        if(min==INT_MAX){
            return 0;
        }
        return min;
    }
};