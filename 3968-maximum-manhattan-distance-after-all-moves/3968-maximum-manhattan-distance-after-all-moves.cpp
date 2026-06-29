class Solution {
public:
    int maxDistance(string moves) {
        vector<int>v(2);
        v[0]=0,v[1]=0;
        int count=0;
        int sum;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                v[0]-=1;
            }
            else if(moves[i]=='R'){
                v[0]+=1;
            }
            else if(moves[i]=='D'){
                v[1]-=1;
            }
            else if(moves[i]=='U'){
                v[1]+=1;
            }
            else{
                count+=1;
            }
        }
        sum=abs(v[0])+abs(v[1]);
        sum+=count;
        return sum;
    }
};