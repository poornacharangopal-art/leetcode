class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int n=nums.size();
        int m1=0,m2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                m1=i;
                maxi=nums[i];
            }
            if(nums[i]<mini){
                m2=i;
                mini=nums[i];
            }
        }
        int ans1 = max(m1, m2) + 1;       

        int ans2 = n - min(m1, m2);     

        int ans3 = m1 + 1 + n - m2;      

        int ans4 = m2 + 1 + n - m1;      

        return min({ans1, ans2, ans3, ans4});
    }
};