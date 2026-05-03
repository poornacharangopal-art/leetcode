class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                int a=s[left];
                int b=s[right];
                if(a<b){
                    s[right]=s[left];
                }
                else{
                    s[left]=s[right];
                }
            }
            left++;
            right--;
        }
        return s;
    }
};