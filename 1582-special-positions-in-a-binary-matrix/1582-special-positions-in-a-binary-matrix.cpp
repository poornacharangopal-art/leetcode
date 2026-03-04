class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=0,n=0,count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    continue;
                }
                else{
                    for(int k=0;k<mat[i].size();k++){
                        if(k!=j&&mat[i][k]==mat[i][j]){
                            break;
                        }
                        else{
                            m+=1;
                        }
                    }
                    for(int k=0;k<mat.size();k++){
                        if(k!=i&&mat[k][j]==mat[i][j]){
                            break;
                        }
                        else{
                            n+=1;
                        }
                    }
                    if(m==mat[i].size()&&n==mat.size()){
                        count+=1;
                        m=0;
                        n=0;
                    }
                    else{
                        m=0;
                        n=0;
                    }
                }
            }
        }
        return count ;   
    }
};