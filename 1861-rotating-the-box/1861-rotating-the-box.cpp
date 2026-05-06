class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxgrid) {
        int m=boxgrid.size();
        int n=boxgrid[0].size();
        for(int i=0;i<m;i++){
            int empty=n-1;
            for(int j=n-1;j>=0;j--){
                if(boxgrid[i][j]=='*'){
                    empty=j-1;
                }
                else if(boxgrid[i][j]=='#'){
                    swap(boxgrid[i][j],boxgrid[i][empty]);
                    empty--;
                }
            }
        }
        vector<vector<char>>ans(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[j][m-1-i]=boxgrid[i][j];
            }
        }
        return ans;
    }
};