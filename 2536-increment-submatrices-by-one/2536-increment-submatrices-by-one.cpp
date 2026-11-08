class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>diff(n,vector<int>(n,0));
        for(int i=0;i<queries.size();i++){
            int r1=queries[i][0];
            int c1=queries[i][1];
            int r2=queries[i][2];
            int c2=queries[i][3];
            diff[r1][c1]+=1;
            if(c2+1<n)
            diff[r1][c2+1]-=1;
              if(r2+1<n && c2+1<n)
            diff[r2+1][c2+1]+=1;
            if(r2+1<n)
            diff[r2+1][c1]-=1;

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i>0)diff[i][j]+=diff[i-1][j];
                if(j>0)diff[i][j]+=diff[i][j-1];
                if(i>0 && j>0) diff[i][j]-=diff[i-1][j-1];
            }
        }
        return diff;
    }
};