class Solution {
public:
    void reverseString(vector<char>& s) {
        int right=0,left=s.size()-1;
        while(left>right){
            swap(s[right],s[left]);
            right++;
            left--;
        }
    }
};