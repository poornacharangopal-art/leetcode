class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int waitingtime=0;
        int maxi=0;
        for(int i=0;i<lights.size();i++){
            maxi=max(maxi,lights[i]);
        }
        for(int i=0;i<arrivalTime.size();i++){
            int a=arrivalTime[i]%period;
            if(a<maxi){
                waitingtime=max(waitingtime,0);
            }
            else{
                waitingtime=max(waitingtime,period-a);
            }
        }
        return waitingtime;
    }
};