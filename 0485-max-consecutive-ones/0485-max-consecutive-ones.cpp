class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int min=0;
        int count=1,n=0;
        if(nums.size()==1){
            if(nums[0]==1){
                return 1;
            }
            else{
                return 0;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                n+=1;
            }
            if(i!=nums.size()-1&&nums[i]==nums[i+1]&&nums[i]==1){
                count+=1;
                if(count>min){
                    min=count;
                }
            }
            else{
                count=1;
            }
            
        }
        if(n==0){
            return 0;
        }
       else if(n!=1&&min>1)
        return min;
        else if(n==1)
        return 1;
        else if(min<1&&n!=0)
        return 1;
        return 0;
    }
};