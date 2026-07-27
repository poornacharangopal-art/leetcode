class Solution {
public:
    int maxProduct(int n) {
       vector<int>v;
       while(n!=0){
        int i=n%10;
        n=n/10;
        v.push_back(i);
       } 
       sort(v.rbegin(),v.rend());
       return v[0]*v[1];
    }
};