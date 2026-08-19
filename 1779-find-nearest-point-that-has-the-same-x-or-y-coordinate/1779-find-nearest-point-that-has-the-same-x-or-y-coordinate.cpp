class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mini=INT_MAX;
        int index=-1;
        for(int i=0;i<points.size();i++){
            int a=points[i][0];
            int b=points[i][1];
            int dis=(a-x)*(a-x)+(b-y)*(b-y);
            if(a==x||b==y){
                if(mini>dis){
                    index=i;
                    mini=dis;
                }
            }
        }
        return index;
    }
};