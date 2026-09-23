class Solution {
public:
    bool dfs(int n,vector<vector<int>>&adj,vector<int>&visited,vector<int>&pathvisited,vector<int>&check){
        check[n]=0;
        for(int nums:adj[n]){
            if(!visited[nums]){
                visited[nums]=1;
                pathvisited[nums]=1;
                if(dfs(nums,adj,visited,pathvisited,check)){
                    check[n]=0;
                    pathvisited[nums]=0;
                    return true;
                }
                pathvisited[nums]=0;
            }
                else{
                    if(pathvisited[nums]){
                        check[n]=0;
                        return true;
                    }
                    if(check[nums]==0){
                        check[n]=0;
                        return true;
                    }
                }
            }
        check[n]=1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>>adj(graph.size());
        for(int i=0;i<graph.size();i++){
            for(int n:graph[i]){
                adj[i].push_back(n);
            }
        }
        vector<int>visited(graph.size(),0);
        vector<int>pathvisited(graph.size(),0);
        vector<int>check(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(visited[i])continue;
            visited[i]=1;
            pathvisited[i]=1;
            dfs(i,adj,visited,pathvisited,check);
            pathvisited[i]=0;
        }
        vector<int>ans;
        for(int i=0;i<graph.size();i++){
            if(check[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};