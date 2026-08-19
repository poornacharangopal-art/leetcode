class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>v;
        vector<int>v1;
        for(int i=0;i<reservedSeats.size();i++){
            int a=reservedSeats[i][0],b=reservedSeats[i][1];
            if(v.find(a-1)==v.end()){
                v[a-1]=vector<int>(10,0);
                v1.push_back(a-1);
            }
            v[a-1][b-1]=1;
        }
        int a=n-v.size();
        int count=0;
        count+=a*2;
        for(int j=0;j<v1.size();j++){
            int i=v1[j];

                 bool left=v[i][1]==0&&v[i][2]==0&&v[i][3]==0&&v[i][4]==0;

    bool middle=v[i][3]==0&&v[i][4]==0&&v[i][5]==0&&v[i][6]==0;

    bool right=v[i][5]==0&&v[i][6]==0&&v[i][7]==0&&v[i][8]==0;

    if(left&&right)
        count+=2;
    else if(left||middle||right)
        count++;
        }
        return count;
    }
};