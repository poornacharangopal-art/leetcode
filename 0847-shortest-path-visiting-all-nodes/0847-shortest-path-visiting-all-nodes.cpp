class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
         int n=graph.size();
         if(n==1){
            return 0;
         }
        queue<pair<int,int>>q;
        set<pair<int,int>>vis;
           for (int i = 0; i < n; i++) {
            int bitmask = (1 << i);

            q.push({i, bitmask});
            vis.insert({i, bitmask});
        }
        int allvisitedstate=(1<<n)-1;
        int result=0;
        while(!q.empty()){
            int size=q.size();
            result++;
            while(size--){
                auto node=q.front();
                q.pop();
                int currval=node.first;
                int currmask=node.second;
                for(auto&adj:graph[currval]){
                    int netmask=currmask|(1<<adj);
                    if(netmask==allvisitedstate){
                        return result;
                    }
                    if(vis.find({adj,netmask})==vis.end()){
                        vis.insert({adj,netmask});
                        q.push({adj,netmask});
                    }
                }
            }
        }
        return -1;
    }
};