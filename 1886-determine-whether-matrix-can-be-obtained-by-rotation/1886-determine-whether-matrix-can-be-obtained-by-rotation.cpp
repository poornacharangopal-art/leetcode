class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=0;
        if(mat==target){
            return true;
        }
        while(n!=360){
            for(int i=0;i<mat.size();i++){
                for(int j=i+1;j<mat[i].size();j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<mat.size();i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            if(mat==target){
                return true;
            }
            n+=90;
        }
        return false;
        }
};