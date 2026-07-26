class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>>ans;
        int n=series1.size()+series2.size();
        int n1=series1.size();
        int n2=series2.size();
        int i=0,j=0;
        int len=0;
        while(len<n){
            if(i<n1&&j<n2&&series1[i][0]<series2[j][0]){
                vector<int>v(2);
                v[0]=series1[i][0];
                v[1]=series1[i][1]+series2[j][1];
                ans.push_back(v);
                i++;
            }
            else if(i<n1&&j<n2&&series1[i][0]>series2[j][0]){
                vector<int>v(2);
                v[0]=series2[j][0];
                v[1]=series1[i][1]+series2[j][1];
                ans.push_back(v);
                j++;
            }
            else if(i<n1&&j<n2&&series1[i][0]==series2[j][0]){
                vector<int>v(2);
                v[0]=series1[i][0];
                v[1]=series1[i][1]+series2[j][1];
                ans.push_back(v);
                j++;
                i++;
                len++;
            }
            else if(i==n1){
                vector<int>v(2);
                v[0]=series2[j][0];
                v[1]=series2[j][1];
                ans.push_back(v);
                j++;
            }
            else if(j==n2){
                vector<int>v(2);
                v[0]=series1[i][0];
                v[1]=series1[i][1];
                ans.push_back(v);
                i++;
            }
            len++;
        }
        return ans;
    }
};