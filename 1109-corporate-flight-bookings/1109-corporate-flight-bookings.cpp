class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>cum(n,0);
        for(int i=0;i<bookings.size();i++){
            int l=bookings[i][0]-1;
            int r=bookings[i][1]-1;
            int a=bookings[i][2];
            cum[l]+=a;
            if(r+1<n){
                cum[r+1]-=a;
            }
        }
        for(int i=1;i<n;i++){
            cum[i]=cum[i]+cum[i-1];
        }
        return cum;
    }
};