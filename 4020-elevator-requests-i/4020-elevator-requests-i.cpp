class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum=0;
        for(int i=0;i<requests.size();i++){
            if(i==0)sum+=requests[0];
            else{
                sum+=abs(requests[i-1]-requests[i]);
            }
        }
        return sum;
    }
};