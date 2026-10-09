class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1;
        int top=0,bottom=n-1;
        int l=1;
        vector<vector<int>>nums(n,vector<int>(n,0));
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                nums[top][i]=l;
                l++;
            }
            for(int i=top+1;i<=bottom;i++){
                nums[i][right]=l;
                l++;
            }
            if(top<bottom){
                for(int i=right-1;i>=left;i--){
                    nums[bottom][i]=l;
                    l++;
                }
            }
            if(left<right){
                for(int i=bottom-1;i>top;i--){
                    nums[i][left]=l;
                    l++;
                }
            }
            left++;
            top++;
            right--;
            bottom--;
        }  
        return nums;      
    }
};