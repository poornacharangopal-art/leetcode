class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int i=0;
        int j=0;
        int t=1;
        while(t){
            visited[i][j]=1;
            if(grid[i][j]=='R'){
                if(j+1<m&&visited[i][j+1]==1){
                    return{i,j};
                }
                if(j+1>=m){
                    return {i,j};
                }
                else{
                    i=i;
                    j=j+1;
                }
            }
            else if(grid[i][j]=='L'){
                if(j-1>=0&&visited[i][j-1]==1){
                    return{i,j};
                }
                if(j-1<0){
                    return {i,j};
                }
                else{
                    i=i;
                    j=j-1;
                }
            }
            else if(grid[i][j]=='D'){
                if(i+1<n&&visited[i+1][j]==1){
                    return{i,j};
                }
                if(i+1>=n){
                    return {i,j};
                }
                else{
                    i=i+1;
                    j=j;
                }
            }
            else if(grid[i][j]=='U'){
                if(i-1>=0&&visited[i-1][j]==1){
                    return{i,j};
                }
                if(i-1<0){
                    return {i,j};
                }
                else{
                    i=i-1;
                    j=j;
                }
            }
            else{
                break;
            }
        }
        return {-1,-1};
    }
};