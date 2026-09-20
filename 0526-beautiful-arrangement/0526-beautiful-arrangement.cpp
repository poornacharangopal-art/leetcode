class Solution {
public:
    void backtrack(int pos,int&n,vector<int>&v,int&count,vector<int>&visited){
        if(pos==n+1){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(visited[i])continue;
            if(i%pos==0||pos%i==0){
            visited[i]=1;
            v.push_back(i);
            backtrack(pos+1,n,v,count,visited);
            v.pop_back();
            visited[i]=0;
            }
        }
    }
    int countArrangement(int n) {
        int count=0;
        vector<int>visited(n+1,0);
        vector<int>v;
        backtrack(1,n,v,count,visited);
        return count;
    }
};