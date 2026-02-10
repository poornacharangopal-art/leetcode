class Solution {
public:
    int maxProfit(vector<int>& prices){
        int minvalue=prices[0];
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(minvalue>prices[i]){
                minvalue=prices[i];
            }
            else{
                maxprofit=max(maxprofit,prices[i]-minvalue);
            }
        }
       
        return maxprofit;
    }
};