class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int count=1;
        int i=1;
        int min=1;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]){
             if(nums[i]-nums[i-1]==1){
                count+=1;
            }
            else{
                count=1;
            }
            }
            while(i!=nums.size()-1&&nums[i]==nums[i+1]){
                i++;
            }
            if(count>min){
                min=count;
            }
            i++;
        }
        return min;
    }
};