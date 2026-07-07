class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            unordered_map<int,int>mp;
            for(int j=0;j<matrix[i].size();j++){
                mp[matrix[i][j]]++;
            }
            if(mp.size()!=matrix.size()){
                return false;
            }
        }
        for(int i=0;i<matrix[0].size();i++){
            unordered_map<int,int>mp;
            for(int j=0;j<matrix.size();j++){
                mp[matrix[j][i]]++;
            }
            if(mp.size()!=matrix.size()){
                return false;
            }
        }
        return true;
    }
};