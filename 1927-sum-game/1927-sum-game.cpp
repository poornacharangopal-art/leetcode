class Solution {
public:
    bool sumGame(string num) {
        vector<int>sum(2,0),q(2,0);
        int n=num.size();
        for(int i=0;i<n/2;i++){
            if(num[i]=='?'){
                q[0]++;
                continue;
            }
            sum[0]+=num[i]-'0';
            
        }
         for(int i=n/2;i<n;i++){
            if(num[i]=='?'){
                q[1]++;
                continue;
            }
            sum[1]+=num[i]-'0';
            
        }
        if ((q[0] + q[1]) & 1) return 1;

        return (sum[0] - sum[1]) != ((q[1] - q[0]) >> 1) * 9;

    }
};