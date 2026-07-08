class Solution {
public:
    long long dist(vector<int>& p1, vector<int>& p2) {
        long long dx = p1[0] - p2[0];
        long long dy = p1[1] - p2[1];
        return dx * dx + dy * dy;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_map<long long ,int>mp;
        vector<vector<int>>v={p1,p2,p3,p4};
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                long long n=dist(v[i],v[j]);
                mp[n]++;
            }
        }
        if(mp.size()!=2)return false;
        auto it=mp.begin();
        long long d1=it->first;
        int c1=it->second;
        it++;
        long long d2=it->first;
        int c2=it->second;
        if(d1>d2){
            swap(d1,d2);
            swap(c1,c2);
        }
        return c1==4&&c2==2&&d2==2*d1;
    }
};