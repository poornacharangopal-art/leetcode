class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>p(1,0);
        int i=1,count=0;
        while(i<=n){
            int j=i;
            while( j>0){
                int k=j%2;
                j=j/2;
                if(k==1){
                    count+=1;
                }
            }
            p.push_back(count);
            count=0;
            i++;
        }
        return p;
    }
};