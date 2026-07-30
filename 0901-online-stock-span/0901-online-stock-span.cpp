class StockSpanner {
public:
    vector<int>prices;
    int size=0;
    stack<int>st;
    StockSpanner() {
    }
    
    int next(int price) {
        prices.push_back(price);
        int count=0;
        int i=prices.size()-1;
        while(i>=0){
            if(prices[i]<=price)
            count++;
            else{
                break;
            }
            i--;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */