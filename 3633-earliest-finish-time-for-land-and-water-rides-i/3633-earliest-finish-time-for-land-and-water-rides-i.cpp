class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;
        int b=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            int time=landStartTime[i]+landDuration[i];
            for(int j=0;j<waterStartTime.size();j++){
                int key=time;
                if(waterStartTime[j]>key){
                    int a=waterStartTime[j]-time;
                    key=waterStartTime[j]+waterDuration[j];
                }
                else{
                    key+=waterDuration[j];
                }
                b=min(b,key);
            }
            ans=min(ans,b);
        }
         for(int i=0;i<waterStartTime.size();i++){
            int time=waterStartTime[i]+waterDuration[i];
            for(int j=0;j<landStartTime.size();j++){
                int key=time;
                if(landStartTime[j]>key){
                    int a=landStartTime[j]-time;
                    key=landStartTime[j]+landDuration[j];
                }
                else{
                    key+=landDuration[j];
                }
                b=min(b,key);
            }
            ans=min(ans,b);
        }
        return ans;
    }
};