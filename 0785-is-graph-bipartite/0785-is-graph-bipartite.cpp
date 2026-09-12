class Solution {
public:
    bool dfs(int v,vector<vector<int>>&graph,vector<int>&color){

        for(int i:graph[v]){

            if(color[i]==-1){
                color[i]=1-color[v];

                if(!dfs(i,graph,color))
                    return false;
            }
            else{
                if(color[i]==color[v])
                    return false;
            }
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]!=-1)continue;
          if(!dfs(i,graph,color))
          return false;
        }
        return true;
    }
};