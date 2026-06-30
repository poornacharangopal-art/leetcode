class Solution {
public:
   int counts(vector<int>&v){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==1)
        count++;
    }
    return count;
   }
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++){
            int count=counts(matrix[i]);
            v.push_back(count);
        }
        return v;
    }
};