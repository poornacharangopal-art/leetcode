class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0;i<rowShift.size();i++){
            int k=rowShift[i]%grid.size();
            reverse(grid[i].begin(),grid[i].end());
            reverse(grid[i].begin(),grid[i].end()-k);
            reverse(grid[i].end()-k,grid[i].end());
        }
        for(int i=0;i<colShift.size();i++){
                vector<int>v;
            int k=colShift[i];
            for(int j=0;j<grid.size();j++){
                v.push_back(grid[j][i]);
            }
            k=k%v.size();
            reverse(v.begin(),v.end());
            reverse(v.begin(),v.end()-k);
            reverse(v.end()-k,v.end());
            for(int j=0;j<grid.size();j++){
                grid[j][i]=v[j];
            }
        }
        return grid;
    }
};