class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        if(k%mat[0].size()==0){
            return true;
        }
        else{
            int m=k%mat[0].size();
            vector<vector<int>>mat1=mat;
            while(m--){
                for(int i=0;i<mat.size();i++){
                    if(i%2!=0){
                        mat[i].insert(mat[i].begin(),mat[i][mat[i].size()-1]);
                        mat[i].erase(mat[i].end()-1);
                    }
                    else{
                        mat[i].insert(mat[i].end(),mat[i][0]);
                        mat[i].erase(mat[i].begin()); 
                    }
                }
                if(mat==mat1){
                    return true;
                }
            }
        }
        return false;
    }
};