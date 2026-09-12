class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<int>d1={0,n-1},d2={0,m-1};
        for(int i=0;i<d1.size();i++){
            int k=d1[i];
            for(int j=0;j<m;j++){
                if(grid[k][j]==1&&!vis[k][j]){
                    q.push({k,j});
                    vis[k][j]=1;
                    while(!q.empty()){
                        int l=q.front().first;
                        int l1=q.front().second;
                        q.pop();
                        if(l-1>=0&&!vis[l-1][l1]&&grid[l-1][l1]==1){
                            q.push({l-1,l1});
                            vis[l-1][l1]=1;
                        }
                        if(l1-1>=0&&!vis[l][l1-1]&&grid[l][l1-1]==1){
                             q.push({l,l1-1});
                            vis[l][l1-1]=1;
                        }
                        if(l+1<n&&!vis[l+1][l1]&&grid[l+1][l1]==1){
                            q.push({l+1,l1});
                            vis[l+1][l1]=1;
                        }
                        if(l1+1<m&&!vis[l][l1+1]&&grid[l][l1+1]==1){
                            q.push({l,l1+1});
                            vis[l][l1+1]=1;
                        }
                    }
                }
            }
        }
         for(int i=0;i<d2.size();i++){
            int k=d2[i];
            for(int j=0;j<n;j++){
                if(grid[j][k]==1&&!vis[j][k]){
                    q.push({j,k});
                    vis[j][k]=1;
                    while(!q.empty()){
                        int l=q.front().first;
                        int l1=q.front().second;
                        q.pop();
                        if(l-1>=0&&!vis[l-1][l1]&&grid[l-1][l1]==1){
                            q.push({l-1,l1});
                            vis[l-1][l1]=1;
                        }
                        if(l1-1>=0&&!vis[l][l1-1]&&grid[l][l1-1]==1){
                             q.push({l,l1-1});
                            vis[l][l1-1]=1;
                        }
                        if(l+1<n&&!vis[l+1][l1]&&grid[l+1][l1]==1){
                            q.push({l+1,l1});
                            vis[l+1][l1]=1;
                        }
                        if(l1+1<m&&!vis[l][l1+1]&&grid[l][l1+1]==1){
                            q.push({l,l1+1});
                            vis[l][l1+1]=1;
                        }
                    }
                }
            }
        }
        int count=0;

for(int i=1;i<n-1;i++){
    for(int j=1;j<m-1;j++){
        if(grid[i][j]==1&&!vis[i][j]){
            count++;
        }
    }
}
        return count;
    }
};