class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0,right=arr.size()-1;
        int mid;
        while(left<=right){
             mid=(left+right)/2;
            if(arr[mid+1]<arr[mid]&&arr[mid-1]<arr[mid])
            break;
            else if(arr[mid-1]>arr[mid]){
                right--;
            }
            else{
                left++;
            }
        }
        return mid;
    }
};