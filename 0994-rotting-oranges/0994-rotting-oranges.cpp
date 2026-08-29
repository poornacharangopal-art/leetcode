
class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int ones=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==2){
                  q.push({i,j});  
                }
               if(mat[i][j]==1)ones++;
            }
        }
        vector<vector<int>>vis(m,vector<int>(n));
        int k=q.size();
        int c=0,times=0,c1=0;
        while(!q.empty()){
            int l=q.front().first;
            int l2=q.front().second;
            vis[l][l2]=1;
            q.pop();
            if(l-1>=0&&(mat[l-1][l2]==1||mat[l-1][l2]==2)){
                if(!vis[l-1][l2]){
                    vis[l-1][l2]=1;
                }
                if(mat[l-1][l2]==1){
                    mat[l-1][l2]=2;
                      q.push({l-1,l2});
                    c1++;
                }
            }

            if(l+1<m&&(mat[l+1][l2]==1||mat[l+1][l2]==2)){
                if(!vis[l+1][l2]){
                    vis[l+1][l2]=1;
                    if(mat[l+1][l2]==1){
                        mat[l+1][l2]=2;
                        q.push({l+1,l2});
                        c1++;
                    }
                }
            }
            if(l2+1<n&&(mat[l][l2+1]==1||mat[l][l2+1]==2)){
                if(!vis[l][l2+1]){
                    vis[l][l2+1]=1;
                }
                if(mat[l][l2+1]==1){
                    mat[l][l2+1]=2;
                     q.push({l,l2+1});
                    c1++;
                }
            }
            if(l2-1>=0&&(mat[l][l2-1]==1||mat[l][l2-1]==2)){
                if(!vis[l][l2-1]){
                    vis[l][l2-1]=1;
                }
                if(mat[l][l2-1]==1){
                    mat[l][l2-1]=2;
                        q.push({l,l2-1});
                    c1++;
                }
            }
            c++;
            if(c==k){
                if(!q.empty())
                times++;
                c=0;
                k=q.size();
            }
        }
        if(c1==ones){
            return times;
        }
        return -1;
    }
};