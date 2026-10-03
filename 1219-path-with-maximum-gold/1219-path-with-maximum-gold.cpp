class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&grid,int sum,int&ans,vector<vector<int>>&vis){
        int n=grid.size();
        int m=grid[0].size();
        sum+=grid[i][j];
        vis[i][j]=1;
        if((i+1<n&&(grid[i+1][j]==0||vis[i+1][j]==1))&&(i-1>=0&&(grid[i-1][j]==0||vis[i-1][j]==1))&&(j+1<m&&(grid[i][j+1]==0||vis[i][j+1]==1))&&(j-1>=0&&(grid[i][j-1]==0||vis[i][j-1]==1))){
            ans=max(ans,sum);
            vis[i][j]=0;
            return ans;
        }
        if(i+1<n&&grid[i+1][j]!=0&&vis[i+1][j]!=1){
            vis[i+1][j]=1;
            dfs(i+1,j,grid,sum,ans,vis);

        }
        if(i-1>=0&&(grid[i-1][j]!=0&&vis[i-1][j]!=1)){
             vis[i-1][j]=1;
            dfs(i-1,j,grid,sum,ans,vis);
        }
        if(j+1<m&&(grid[i][j+1]!=0&&vis[i][j+1]!=1)){
            vis[i][j+1]=1;
            dfs(i,j+1,grid,sum,ans,vis);
        }
        if(j-1>=0&&(grid[i][j-1]!=0&&vis[i][j-1]!=1)){
            vis[i][j-1]=1;
            dfs(i,j-1,grid,sum,ans,vis);
        }
        vis[i][j]=0;
        ans=max(ans,sum);
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int a=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)continue;
                int ans=0;
                int sum=0;
                vector<vector<int>>vis(n,vector<int>(m,0));
                a=max(a,dfs(i,j,grid,sum,ans,vis));
            }
        }
        return a;
    }
};