class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int i=0,j=0;
    int product=1;
    int count=0;
    while(j<nums.size()){
        product*=nums[j];
        if(product>=k){
            int n=j-i;
            count+=n;
            i++;
            j=i;
            product=1;
            continue;
        }
        else if(j==nums.size()-1){
            int n=j-i+1;
            count+=n;
            i++;
            j=i;
            product=1;
            continue;

        }
        j++;
    }
    return count;
    }
};