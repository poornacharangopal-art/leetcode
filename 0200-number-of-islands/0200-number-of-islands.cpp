class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<int>>vis(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                if(vis[i][j])continue;

                queue<pair<int,int>>q;
                q.push({i,j});
                vis[i][j]=1;
                while(!q.empty()){
                    int l=q.front().first;
                    int l2=q.front().second;
                    q.pop();
                    if(l-1>=0&&grid[l-1][l2]=='1'){
                        if(!vis[l-1][l2]){
                            vis[l-1][l2]=1;
                            q.push({l-1,l2});
                        }
                    }
                  
                    if(l+1<m&&grid[l+1][l2]=='1'){
                        if(!vis[l+1][l2]){
                            vis[l+1][l2]=1;
                            q.push({l+1,l2});
                        }
                    }
                    if(l2+1<n&&grid[l][l2+1]=='1'){
                        if(!vis[l][l2+1]){
                            vis[l][l2+1]=1;
                            q.push({l,l2+1});
                        }
                    }
                    if(l2-1>=0&&grid[l][l2-1]=='1'){
                        if(!vis[l][l2-1]){
                            vis[l][l2-1]=1;
                            q.push({l,l2-1});
                        }
                    }
                }
                count++;
                }
            }
        }
        return count;
    }
};