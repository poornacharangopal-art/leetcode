class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        vector<vector<char>>poss= {
{grid[0][0], grid[0][1], grid[1][0], grid[1][1]},
{grid[0][1], grid[0][2], grid[1][1], grid[1][2]},
{grid[1][0], grid[1][1], grid[2][0], grid[2][1]},
{grid[1][1], grid[1][2], grid[2][1], grid[2][2]}
};
        for(int i=0;i<poss.size();i++){
            unordered_map<char,int>mp;
            for(int j=0;j<4;j++)mp[poss[i][j]]++;
            if(mp.size()<2)return true;
            if(mp['W']==1||mp['B']==1)return true;
        }
        return false;
    }
};