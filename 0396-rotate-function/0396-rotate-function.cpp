class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=i*nums[i];
        }
        int value=0;
        for(int x:nums){
            value+=x;
        }
        int max=sum;
        for(int i=0;i<n-1;i++){
            sum+=value-n*nums[n-1-i];
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};