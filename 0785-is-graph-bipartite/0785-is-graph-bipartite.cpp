class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        //0->yellow 1->red
        for(int i=0;i<n;i++){
           if(color[i]!=-1)continue; 
        queue<int>q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            int i=q.front();
            q.pop();
            int c=color[i];
            for(int j:graph[i]){
                if(color[j]==-1){
                q.push(j);
                if(c==0)
                color[j]=1;
                else
                color[j]=0;
                }
                else{
                    if(color[j]==c){
                        return false;
                    }
                }
            }
        }
        }
        return true;
    }
};