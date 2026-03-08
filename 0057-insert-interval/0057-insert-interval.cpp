class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
         vector<vector<int>>v;
         vector<int>v1;
        int k;
        int k1;
        int i=0;
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
            v1.clear();
            i++;
        }
        return v;
    }
};