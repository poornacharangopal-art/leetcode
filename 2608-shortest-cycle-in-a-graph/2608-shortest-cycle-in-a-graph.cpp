class Solution {
public:
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        int ans=INT_MAX;
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
           
            vector<int> visited(n, 0);
            vector<int> depth(n);

            q.push({i,-1});
            visited[i]=1;
            depth[i]=0;
            while(!q.empty()){
                int l=q.front().first;
                int p=q.front().second;
                q.pop();
                for(int num:adj[l]){
                    if(visited[num]!=1){
                        visited[num]=1;
                        depth[num]=depth[l]+1;
                        q.push({num,l});
                    }
                    else{
                        if(num!=p){
                            ans=min(ans,depth[l]+depth[num]+1);
                        }
                    }
                }
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};