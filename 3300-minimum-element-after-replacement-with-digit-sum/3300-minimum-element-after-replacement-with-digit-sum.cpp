class Solution {
public:
    int sumofdigit(int num){
        int ans=0;
        while(num!=0){
            int i=num%10;
            ans+=i;
            num=num/10;
        }
        return ans;
    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int a=sumofdigit(nums[i]);
            nums[i]=a;
        }
        int ans=nums[0];
        for(int i=0;i<nums.size();i++){
            ans=min(ans,nums[i]);
        }
        return ans;
    }
};