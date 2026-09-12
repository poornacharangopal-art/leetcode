class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>ans(n,vector<int>(m));
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first.first,j=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            ans[i][j]=steps;
            if(i-1>=0&&!vis[i-1][j]){
                q.push({{i-1,j},steps+1});
                vis[i-1][j]=1;
            }
            if(j-1>=0&&!vis[i][j-1]){
                q.push({{i,j-1},steps+1});
                vis[i][j-1]=1;
            }
            if(i+1<n&&!vis[i+1][j]){
                q.push({{i+1,j},steps+1});
                vis[i+1][j]=1;
            }
            if(j+1<m&&!vis[i][j+1]){
                q.push({{i,j+1},steps+1});
                vis[i][j+1]=1;
            }
        }
        return ans;
    }
};