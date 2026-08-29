class Solution {
public:
    void dfs(int value,vector<vector<int>>&adj,vector<int>&ls,vector<int>&vis){
        ls.push_back(value);
        vis[value]=1;
        for(auto it:adj[value]){
            if(!vis[it])
            dfs(it,adj,ls,vis);
        }
    }
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
        vector<int>ls;
        int count=0;
        vector<int>vis(n+1,0);
        for(int start=1;start<=n;start++){
            if(vis[start])continue;
            dfs(start,adj,ls,vis);
            count++;
        }
        return count;
    }
};