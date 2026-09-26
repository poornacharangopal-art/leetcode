class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
         vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<pre.size();i++){
            int k=pre[i][0];
            adj[pre[i][1]].push_back(k);
            
            indegree[k]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int k=q.front();
            q.pop();
            for(int l:adj[k]){
                indegree[l]--;
                if(indegree[l]==0){
                    q.push(l);
                }
            }
            cnt++;
        }
        if(cnt==n)return true;
        return false;
    }
};