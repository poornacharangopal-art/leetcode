class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
         int n=v.size()/2;
        int val1=v[n];
        int val=val1%x;
        for(int i=1;i<v.size();i++){
            if(v[i]%x!=val){
                return -1;
            }
        }
        long long ans=0;
        for(int i=0;i<v.size();i++){
            ans+=abs(v[i]-val1)/x;
        }
        return ans;
    }
};