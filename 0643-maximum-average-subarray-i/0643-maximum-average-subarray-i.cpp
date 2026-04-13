class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=(double)INT_MIN;
        int i=0,j=0;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1==k){
                double avg1=sum/(double)k;
                if(avg1>avg){
                    avg=avg1;
                }
                sum-=nums[i];
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return avg;
    }
};