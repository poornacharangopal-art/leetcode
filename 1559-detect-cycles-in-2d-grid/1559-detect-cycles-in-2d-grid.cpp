class Solution {
public:
    bool containsCycle(vector<vector<char>>& grid) {

        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));

        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(visited[i][j])
                    continue;

                queue<pair<pair<int,int>,pair<int,int>>> q;

                q.push({{i,j},{-1,-1}});
                visited[i][j]=1;

                while(!q.empty()){

                    int x=q.front().first.first;
                    int y=q.front().first.second;

                    int px=q.front().second.first;
                    int py=q.front().second.second;

                    q.pop();

                    for(int k=0;k<4;k++){

                        int nx=x+dx[k];
                        int ny=y+dy[k];

                        if(nx<0 || nx>=n || ny<0 || ny>=m)
                            continue;

                        if(grid[nx][ny]!=grid[x][y])
                            continue;

                        if(nx==px && ny==py)
                            continue;

                        if(visited[nx][ny])
                            return true;

                        visited[nx][ny]=1;
                        q.push({{nx,ny},{x,y}});
                    }
                }
            }
        }

        return false;
    }
};