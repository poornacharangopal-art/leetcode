class Solution {
public:
    int findCircleNum(vector<vector<int>>& isconnected) {
        int n=isconnected[0].size();
        vector<vector<int>>adj(n+1);
        for(int i=0;i<isconnected.size();i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(isconnected[i][j]==1){
                    adj[i+1].push_back(j+1);
                }
            }
        }
        int start=1,end=1;
        vector<int>vis(n+1,0);
        int count=0;
        queue<int>q;
         for(int start=1;start<=n;start++){
            if(vis[start])continue;
             q.push(start);
             vis[start]=1;
             int node;
            while(!q.empty()){
             node=q.front();
                q.pop();
                for(auto it:adj[node]){
                    if(!vis[it]){
                        vis[it]=1;
                    q.push(it);
                    }
                }
            }
            count++;
        }
        return count;
    }
};