class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int total=0,count=0;
        for(int i=0;i<costs.size();i++){
            if(coins<costs[i]){
                break;
            }
            total+=costs[i];
            if(total>coins){
                break;
            }
            count++;
        }
        return count;
    }
};