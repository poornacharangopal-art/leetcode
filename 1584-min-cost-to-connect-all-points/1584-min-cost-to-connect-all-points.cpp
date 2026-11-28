class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<int>vis(points.size(),0);
        vector<int>dist(points.size(),INT_MAX);
        int count=0;
        int i=0;
        int cost=0;
        dist[0]=0;
        while(count<points.size()){
            int mini=INT_MAX;
            int u=-1;
            for(int j=0;j<points.size();j++){
                if(vis[j])continue;
                if(dist[j]<mini){
                    mini=dist[j];
                    u=j;
                }
            }
            i=u;
            vis[i]=1;
            cost+=mini;
            count++;
            for(int j=0;j<points.size();j++){
                if(vis[j])continue;
                if(dist[j]>abs(points[j][0]-points[u][0])+abs(points[j][1]-points[u][1])){
                    dist[j]=abs(points[j][0]-points[u][0])+abs(points[u][1]-points[j][1]);
                }
            }
        }
        return cost;
    }
};