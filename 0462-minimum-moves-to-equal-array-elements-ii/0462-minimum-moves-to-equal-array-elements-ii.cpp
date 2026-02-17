class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int min=INT_MAX;
        long int num=0;
        for(int i=0;i<nums.size();i++){
            num=0;
            for(int j=0;j<nums.size();j++){
                num+=abs(nums[i]-nums[j]);
            }
            if(num<min){
                min=num;;
            }
        }
        return min;
    }
};