class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int n1=stones[stones.size()-1];
            int n2=stones[stones.size()-2];
            if(n1==n2){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                 stones.pop_back();
                 stones[stones.size()-1]=n1-n2;
            }
        }
        if(stones.size()==0)
        return 0;
        return stones[0];
    }
};