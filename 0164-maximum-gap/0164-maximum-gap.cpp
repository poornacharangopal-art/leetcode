class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int min=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            int diff=nums[i+1]-nums[i];
            if(min<diff){
                min=diff;
            }
        }
        return min;
        
    }
};