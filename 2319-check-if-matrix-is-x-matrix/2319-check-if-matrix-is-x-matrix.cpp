class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i==j&&grid[i][j]==0){
                    return false;
                } 
                if(j==grid.size()-1-i&&grid[i][j]==0){
                    return false;
                }        
                else if(i!=j&&j!=grid.size()-i-1&&grid[i][j]!=0){
                    return false;
                }    
            }
        }
        return true;
    }
};