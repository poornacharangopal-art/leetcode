class Solution {
public:
    int rev(int n){
        string s="";
        while(n>0){
            int i=n%2;
            char c=i+'0';
            s+=c;
            n=n/2;
        }
        int num=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            num=num+pow(2,s.size()-1-i);
        }
        return num;
    }
    vector<int> sortByReflection(vector<int>& nums) {
         sort(nums.begin(),nums.end(),[this](int a,int b){
            int ra = rev(a);
            int rb = rev(b);

            if (ra == rb)
                return a < b;

            return ra < rb;
         });
         return nums;
    }
};