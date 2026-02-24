class Solution {
public:
    int mySqrt(int x){
        int ans;
        if(x==0||x==1){
            return x;
        }
        int low=1;
        int high=x;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid==x/(double)mid){
                ans=mid;
                break;
            }
            else if(mid<x/(double)mid){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

    }
};