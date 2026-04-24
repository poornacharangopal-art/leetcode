class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>v;
        if(sides[0]+sides[1]<=sides[2]||sides[1]+sides[2]<=sides[0]||sides[0]+sides[2]<=sides[1]){
            return v;
        }
        double a=(pow(sides[1],2)+pow(sides[2],2)-pow(sides[0],2))/(double)(2*sides[2]*sides[1]);
         double b=(pow(sides[0],2)+pow(sides[2],2)-pow(sides[1],2))/(double)(2*sides[2]*sides[0]);
          double c=(pow(sides[1],2)+pow(sides[0],2)-pow(sides[2],2))/(double)(2*sides[0]*sides[1]);
          double ar=acos(a);
          double ad=ar*180.0/M_PI;
           double br=acos(b);
          double bd=br*180.0/M_PI;
           double cr=acos(c);
          double cd=cr*180.0/M_PI;
          v.push_back(ad);
          v.push_back(bd);
          v.push_back(cd);
          sort(v.begin(),v.end());
          return v;
    }
};