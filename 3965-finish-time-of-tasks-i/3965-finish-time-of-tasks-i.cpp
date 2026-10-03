class Solution {
public:
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>>adj(n);
        vector<vector<int>>adj2(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj2[v].push_back(u);
        }
        vector<long long >ans(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(adj[i].size()==0){
                ans[i]=baseTime[i];
                q.push(i);
            }
        }
        vector<long long>maxi(n,0);
        vector<long long>mini(n,LONG_MAX);
        vector<int>count(n,0);
        while(!q.empty()){
            int i=q.front();
            q.pop();
            for(int num:adj2[i]){
                maxi[num]=max(maxi[num],ans[i]);
                mini[num]=min(mini[num],ans[i]);
                count[num]++;
                if(count[num]==adj[num].size()){
                    ans[num]=maxi[num]+(maxi[num]-mini[num])+baseTime[num];
                q.push(num);
                }
            }
        }
        return ans[0];
    }
};