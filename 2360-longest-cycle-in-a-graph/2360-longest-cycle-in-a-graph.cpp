class Solution {
public:
    void lc(int v,vector<vector<int>>&adj,vector<int>&visited,vector<int>&pathvisited,vector<int>& depth,int&ans){
        for(int i:adj[v]){
            if(visited[i]!=1){
                visited[i]=1;
                depth[i]=depth[v]+1;
                pathvisited[i]=1;
                lc(i,adj,visited,pathvisited,depth,ans);
                pathvisited[i]=0;
            }
            else{
                if(pathvisited[i]){
                    ans=max(ans,depth[v]-depth[i]+1);
                }
            }
        }
    }
    int longestCycle(vector<int>& edges) {
        vector<vector<int>>adj(edges.size());
        for(int i=0;i<edges.size();i++){
            if(edges[i]!=-1)
            adj[i].push_back(edges[i]);
        }
        vector<int>visited(edges.size(),0);
        vector<int>pathvisited(edges.size(),0);
        vector<int>depth(edges.size(),0);
        int ans=-1;
        for(int i=0;i<edges.size();i++){
            if(visited[i])continue;
            else{
                visited[i]=1;
                pathvisited[i] = 1;
                lc(i,adj,visited,pathvisited,depth,ans);
                pathvisited[i]=0;
            }
        }
        return ans;
    }
};