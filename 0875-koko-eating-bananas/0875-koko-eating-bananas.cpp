class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        int left=1,right=maxi;
        int ans;
        while(left<=right){
            int mid=(left+right)/2;
            long long time=0;
            for(int i=0;i<piles.size();i++){
                int a=ceil(piles[i]/(double)(mid));
                time+=a;
            }
            if(time<=h){
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