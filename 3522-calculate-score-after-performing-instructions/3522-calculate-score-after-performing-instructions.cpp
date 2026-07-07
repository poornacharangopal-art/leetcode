class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long ans=0;
        vector<bool>visited(instructions.size());
        int n=0;
        while(n>=0&&n<instructions.size()&&!visited[n]){
            if(instructions[n]=="add"){
                ans+=values[n];
                visited[n]=true;
            }
            else{
                visited[n]=true;
                n+=values[n];
                continue;
            }
            n++;
        }
        return ans;
    }
};