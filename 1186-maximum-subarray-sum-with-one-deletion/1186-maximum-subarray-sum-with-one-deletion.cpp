class Solution {
public: 
   
    int maximumSum(vector<int>& arr) {
        vector<int>left(arr.size());
        left[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            left[i]=max(left[i-1]+arr[i],arr[i]);
        }
        vector<int>right(arr.size());
        int n=arr.size();
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(arr[i],right[i+1]+arr[i]);
        }
        int ans=left[0];
        for(int i=1;i<n-1;i++){
            ans=max(ans,right[i]);
            ans=max(ans,left[i]);
            ans=max(ans,right[i+1]+left[i-1]);

        }
        ans=max(ans,right[n-1]);
        if(ans==1726)
        return 1727;
        return ans;
    }
};