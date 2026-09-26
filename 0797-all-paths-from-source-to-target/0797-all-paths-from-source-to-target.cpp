class Solution {
public:
    void backtrack(int i,vector<vector<int>>&graph,vector<vector<int>>&ans,vector<int>&v){
        if(i==graph.size()-1){
            v.push_back(i);
            ans.push_back(v);
            return;
        }
        v.push_back(i);
        if(graph[i].size()==0){
            return;
        }
        for(int n:graph[i]){
            backtrack(n,graph,ans,v);
            v.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v;
        vector<vector<int>>ans;
         backtrack(0,graph,ans,v);
        return ans;
    }
};