class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),[&](vector<int> a,vector<int> b){
            int disa=a[0]*a[0]+a[1]*a[1];
            int disb=b[0]*b[0]+b[1]*b[1];
            if(disa==disb){
                return a[0]<b[0];
            }
            return disa<disb;
        });
        vector<vector<int>>v(points.begin(),points.begin()+k);
        return v;
    }
};