
class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        queue<pair<int,int>> q;
        int count = 0;
        int n = grid.size(), m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(grid[i][j] != 0 && vis[i][j] != 1) {

                    int sum = 0;

                    vis[i][j] = 1;
                    q.push({i, j});

                    while(!q.empty()) {
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();

                        sum += grid[r][c];

                        if(r + 1 < n && vis[r + 1][c] != 1 && grid[r + 1][c] != 0) {
                            vis[r + 1][c] = 1;
                            q.push({r + 1, c});
                        }

                        if(r - 1 >= 0 && vis[r - 1][c] != 1 && grid[r - 1][c] != 0) {
                            vis[r - 1][c] = 1;
                            q.push({r - 1, c});
                        }

                        if(c + 1 < m && vis[r][c + 1] != 1 && grid[r][c + 1] != 0) {
                            vis[r][c + 1] = 1;
                            q.push({r, c + 1});
                        }

                        if(c - 1 >= 0 && vis[r][c - 1] != 1 && grid[r][c - 1] != 0) {
                            vis[r][c - 1] = 1;
                            q.push({r, c - 1});
                        }
                    }

                    if(sum % k == 0) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
