class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
         if(finalSum % 2 == 1)
            return {};

        vector<long long> ans;

        long long i = 2;

        while(finalSum >= i) {
            ans.push_back(i);
            finalSum -= i;
            i += 2;
        }

        if(finalSum > 0) {
            ans.back() += finalSum;
        }

        return ans;
    }
};