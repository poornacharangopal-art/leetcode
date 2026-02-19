class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
        if(citations.size()==1&&citations[0]>=1){
            return 1;
        }
        for(int i=0;i<citations.size();i++){
            if(!(citations[i]>=i+1)){
                return i;
            }
        }
        return citations.size();
    }
};