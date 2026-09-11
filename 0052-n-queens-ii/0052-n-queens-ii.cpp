class Solution {
public:
 void backtrack(int i,int n,vector<string>&v,set<vector<string>>&ans,vector<vector<int>>&used){
        if(i==n){
            ans.insert(v);
            return;
        }
        for(int j=0;j<n;j++){
            bool isok=true;
            for(int k=0;k<i;k++){
                for(int m=0;m<n;m++){
                     if(m==j&&used[k][m]==1){
                        isok=false;
                        break;
                    }

                    if(abs(k-i)==abs(m-j)&&used[k][m]==1){
                        isok=false;
                        break;
                    }
                }
            }
            if(!isok){
                continue;
            }
            used[i][j]=1;
            v[i][j]='Q';
            backtrack(i+1,n,v,ans,used);
            used[i][j]=0;
            v[i][j]='.';
        }
    }
    int totalNQueens(int n) {
        set<vector<string>>ans;
        vector<string>v(n,string(n,'.'));
        vector<vector<int>>used(n,vector<int>(n,0));
        backtrack(0,n,v,ans,used);
        return ans.size();
    }
};