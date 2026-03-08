class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        vector<int>v1;
        int i=0;
        int k,k1;
        sort(intervals.begin(),intervals.end());
        while(i<intervals.size()){
            k1=intervals[i][0];
            k=intervals[i][1];
            while(i!=intervals.size()-1&&k>=intervals[i+1][0]){
                i++;
                if(intervals[i][1]>k){
                    k=intervals[i][1];
                }
                if(intervals[i][0]<k1){
                    k1=intervals[i][0];
                }
            }
            v1.push_back(k1);
            v1.push_back(k);
            v.push_back(v1);
            i++;
            v1.clear();
        }
        return v;
    }
};