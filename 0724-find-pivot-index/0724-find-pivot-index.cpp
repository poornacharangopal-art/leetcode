class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       vector<int>suml;
       vector<int>sumr(nums.size());
       int n=nums.size();
       int sum1=0,sum2=0;
       for(int i=0;i<nums.size();i++){
        if(i==0)
        sum1=0;
        else
        sum1+=nums[i-1];
        suml.push_back(sum1);
       } 
       for(int i=nums.size()-1;i>=0;i--){
        if(i==nums.size()-1)
        sum2=0;
        else
        sum2+=nums[i+1];
        sumr[i]=sum2;
       }
       for(int i=0;i<n;i++){
        if(sumr[i]==suml[i]){
            return i;
        }
       }
       return -1;
    }
};