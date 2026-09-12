class Solution {
public:
    void solve(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m));
        queue<pair<int,int>>q;
        vector<int>d1={0,n-1},d2={0,m-1};
        for(int i=0;i<d1.size();i++){
            for(int j=0;j<m;j++){
                if(grid[d1[i]][j]=='O'){
                q.push({d1[i],j});
                vis[d1[i]][j]=1;
                }
            }
        }
          for(int j=0;j<d2.size();j++){
            for(int i=0;i<n;i++){
                if(grid[i][d2[j]]=='O'){
                q.push({i,d2[j]});
                vis[i][d2[j]]=1;
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i-1>=0&&!vis[i-1][j]&&grid[i-1][j]=='O'){
                q.push({i-1,j});
                vis[i-1][j]=1;
            }
             if(j-1>=0&&!vis[i][j-1]&&grid[i][j-1]=='O'){
                q.push({i,j-1});
                vis[i][j-1]=1;
            }
             if(i+1<n&&!vis[i+1][j]&&grid[i+1][j]=='O'){
                q.push({i+1,j});
                vis[i+1][j]=1;
            }
            if(j+1<m&&!vis[i][j+1]&&grid[i][j+1]=='O'){
                q.push({i,j+1});
                vis[i][j+1]=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O'&&!vis[i][j])grid[i][j]='X';
            }
        }
    }
};