class Solution {
public:
    int maximumGap(string skill, string station) {
        int maxi=0;
        int n=skill.size();
        int m=station.size();
        vector<int>a(n);
        vector<int>b(n);
        if(n==1)return 0;
        int j=0;
        for(int i=0;i<n;i++){
            while(station[j]!=skill[i]){
                j++;
            }
            a[i]=j;
            j++;
            }
        j=m-1;
         for(int i=n-1;i>=0;i--){
            while(station[j]!=skill[i]){
                j--;
            }
            b[i]=j;
            j--;
            }
        for(int i=1;i<skill.size();i++){
            maxi=max(maxi,b[i]-a[i-1]);
        }
        return maxi;
    }
};