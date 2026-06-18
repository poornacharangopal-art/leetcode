class Solution {
public:
   bool istransition(vector<int>&nums,vector<vector<int>>& queries,int n){
    vector<int>delta(nums.size()+1,0);
    for(int i=0;i<n;i++){
        int l=queries[i][0];
        int r=queries[i][1];
        int val=queries[i][2];
        delta[l]+=val;
        delta[r+1]-=val;
    }
    vector<int>newdelta(nums.size(),0);
    newdelta[0]=delta[0];
    for(int i=1;i<nums.size();i++){
        newdelta[i]=newdelta[i-1]+delta[i];
    }
    for(int i=0;i<nums.size();i++){
        int reduced=nums[i]-newdelta[i];
        if(reduced>0){
            return false;
        }
    }
    return true;
   }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int left=0,right=queries.size();
        if(istransition(nums,queries,0)){
            return 0;
        }
        int ans=INT_MAX;
        while(left<=right){
            int mid=(left+right)/2;
            if(istransition(nums,queries,mid)){
                right=mid-1;
                ans=min(ans,mid);
            }
            else{
                left=mid+1;
            }
        }
        if(ans==INT_MAX)
        return -1;
        return ans;
    }
};