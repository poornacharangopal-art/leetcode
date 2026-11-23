class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        queue<pair<int,int>>q;
        int n=skills.size();
        for(int i=0;i<n;i++){
            q.push({i,0});
        }
        auto player1=q.front();
        q.pop();
        int count=0;
        k=min(k,n-1);
        while(true){
            auto player2=q.front();
            q.pop();
            if(skills[player1.first]>skills[player2.first]){
                player1.second++;
                q.push({player2.first,0});
            }
            else{
                q.push({player1.first,0});
                player2.second++;
                player1=player2;
            }
            if(player1.second==k){
                return player1.first;
            }
            count++;
        }
        return -1;
    }
};