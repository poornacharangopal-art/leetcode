class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>>grid(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        int colored=0;
        for(int i=0;i<sources.size();i++){
            int r=sources[i][0],c=sources[i][1];
            grid[r][c]=sources[i][2];
            q.push({r,c});
            colored++;
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        while(!q.empty()&&colored<m*n){
            int k=q.size();
            map<pair<int,int>, int> updates;
            for(int i=0;i<k;i++){
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int rx=r+dx[j];
                    int cy=c+dy[j];
                    if(rx>=0&&rx<n&&cy>=0&&cy<m){
                        if(grid[rx][cy]==0){
                              updates[{rx,cy}] = max(updates[{rx,cy}], grid[r][c]);
                        }
                    }
                }
            }
                for(auto &it : updates){
                int r = it.first.first;
                int c = it.first.second;
                grid[r][c] = it.second;
                colored++;
                q.push({r,c});
            }
        }
        return grid;
    }
};