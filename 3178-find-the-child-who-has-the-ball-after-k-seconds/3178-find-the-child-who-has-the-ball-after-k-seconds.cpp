class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int q=k/n;
        int rem=k%n;
        if(q%2==0)return rem;
        return n-rem;
    }
};