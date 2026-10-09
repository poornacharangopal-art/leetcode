class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0,right=matrix[0].size()-1;
        int top=0,bottom=matrix.size()-1;
        vector<int>ans;
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            for(int i=top+1;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            if(top<bottom){
            for(int i=right-1;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            }
            if(left<right){
            for(int i=bottom-1;i>top;i--){
                ans.push_back(matrix[i][left]);
            }
            }
            left++;
            top++;
            right--;
            bottom--;
        }
        return ans;
    }
};