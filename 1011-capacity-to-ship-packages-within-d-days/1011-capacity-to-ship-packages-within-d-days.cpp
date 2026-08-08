class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int sum=0;
       int ans;
       int maxi=0;
       for(int i=0;i<weights.size();i++){
        sum+=weights[i];
        maxi=max(maxi,weights[i]);
       } 
       int left=maxi;
       int right=sum;
       if(days==1){
        return sum;
       }
       while(left<=right){
        int mid=(left+right)/2;
        int day=1;
        int s=0;
        for(int i=0;i<weights.size();i++){
            if (s + weights[i] > mid) {
    day++;
    s = weights[i];
} else {
    s += weights[i];
}
        }
        if(day<=days){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
       }
       return ans;
    }
};