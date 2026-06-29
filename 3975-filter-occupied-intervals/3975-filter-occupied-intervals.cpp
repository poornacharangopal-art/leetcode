class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        vector<vector<int>>occupied;
        int i=0;
        while(i<occupiedIntervals.size()){
            vector<int>v(2);
            v[0]=occupiedIntervals[i][0];
            int j=i;
            int n=occupiedIntervals[i][1];
            while(j<occupiedIntervals.size()&&occupiedIntervals[j][0]-n<=1){
                n=max(occupiedIntervals[j][1],n);
                j++;
            }
            v[1]=n;
            i=j;
            occupied.push_back(v);
        }
        for(int i=0;i<occupied.size();i++){
            if(occupied[i][0]<freeStart&&occupied[i][1]>=freeStart){
                vector<int>v1(2);
                v1[0]=freeEnd+1;
                v1[1]=occupied[i][1];
                occupied[i][1]=freeStart-1;
                occupied.insert(occupied.begin()+i+1,v1);
            }
             else if(occupied[i][0]>=freeStart&&occupied[i][1]<=freeEnd){
                occupied.erase(occupied.begin()+i);
                i--;
            }
            else if(occupied[i][0]>=freeStart&&occupied[i][0]<freeEnd&&occupied[i][1]>freeEnd){
                occupied[i][0]=freeEnd+1;
            }
            else if(occupied[i][0]==freeEnd){
                occupied[i][0]=freeEnd+1;
            }
        }
        return occupied;
    }
};