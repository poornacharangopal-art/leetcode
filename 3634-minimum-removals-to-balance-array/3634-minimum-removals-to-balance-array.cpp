class Solution {
public:
    int bs(int index,vector<int>&nums,int k){
        int low=index;
        int ans=-1;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(1LL*nums[mid]<=1LL*k*nums[index]){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int count=i;
            int ans=bs(i,nums,k);
            if(ans!=-1){
                count+=nums.size()-ans-1;
            }
            mini=min(count,mini);
        }
        return mini;
    }
};