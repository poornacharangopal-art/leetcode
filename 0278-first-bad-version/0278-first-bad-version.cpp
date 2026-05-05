// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         int left=1,right=n;
         while(left<=right){
            int mid=left+(right-left)/2;
            if(isBadVersion(mid)){
                if(mid!=1&&!isBadVersion(mid-1)){
                    return mid;
                }
                else if(mid==1){
                    return 1;
                }
                else{
                    right=mid-1;
                }
            }
            else{
                left=mid+1;
            }
         } 
         return 0;
    }
};