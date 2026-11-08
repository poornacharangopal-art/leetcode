class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
      queue<pair<int,int>>q;
      int m=grid.size(),n=grid[0].size();
      vector<vector<int>>vis(m,vector<int>(n,0));
      int ans=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1&&!vis[i][j]){
                vis[i][j]=1;
                q.push({i,j});
                int count=0;
                while(!q.empty()){
                    int r=q.front().first;
                    int c=q.front().second;
                    count++;
                    q.pop();
                     for (int k = 0; k < n; k++) {
                            if (grid[r][k] == 1 && !vis[r][k]) {
                                vis[r][k] = 1;
                                q.push({r, k});
                            }
                        }
                        for (int k = 0; k < m; k++) {
                            if (grid[k][c] == 1 && !vis[k][c]) {
                                vis[k][c] = 1;
                                q.push({k, c});
                            }
                        }

                    }
                if(count!=1)
                ans+=count;
            }
            vis[i][j]=1;
        }
      }
      return ans;
    }
};