class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0,c=0;
            if(i+1<nums.size()){
                sum+=nums[i+1];
                c++;
            }
            if(i-1>=0){
                sum+=nums[i-1];
                c++;
            }
            if(c!=0){
            int avg=ceil(sum/(double)c);
            if(nums[i]>=avg)count++;
            }
            else{
                count++;
            }
        }
        return count;
    }
};