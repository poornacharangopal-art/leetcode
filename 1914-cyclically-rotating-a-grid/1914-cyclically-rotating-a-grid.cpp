class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int low=min(m,n)/2;
        int i=0;
        while(i<low){
            int rows = m - 2*i;
            int cols = n - 2*i;
            int len = 2 * (rows + cols) - 4;
            int rot = k % len;
            vector<int>v;
            for(int j=i;j<m-i;j++){
                v.push_back(grid[j][i]);
            }
            int d=m-1-i;
            for(int j=i+1;j<n-i;j++){
                v.push_back(grid[d][j]);
            }
            for(int j=m-i-2;j>=i;j--){
                v.push_back(grid[j][n-i-1]);
            }
            for(int j=n-i-2;j>i;j--){
                v.push_back(grid[i][j]);
            }
            int count=0;
            while(count<rot){
                vector<int>p;
                p.push_back(v.back());

           for(int j=0;j<v.size()-1;j++){
             p.push_back(v[j]);
                 }
                v=p;
                count++;
            }
            int l=0;
             for(int j=i;j<m-i;j++){
               grid[j][i]=v[l];
               l++;
             }
            for(int j=i+1;j<n-i;j++){
                grid[d][j]=v[l];
                l++;
            }
            for(int j=m-i-2;j>=i;j--){
                grid[j][n-i-1]=v[l];
                l++;
            }
            for(int j=n-i-2;j>i;j--){
                grid[i][j]=v[l];
                l++;
            }
            i++;
        }
        return grid;
    }
};