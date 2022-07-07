class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        unordered_map<double,int>m;
        int ans=0;
        for(int j=0;j<points.size();j++){
           int  x=points[j][0];
           int  y=points[j][1];
            m.clear();
            for(int i=0;i<points.size()&& i!=j;i++){
                int x2=points[i][0];
                int y2=points[i][1];
                double grad;
                if(x2!=x) grad=(double)(y-y2)/(double)(x-x2);
                else  grad=INT_MAX;
                
                m[grad]++;
                
                ans=max(ans,m[grad] );
           }
        }

        return ans+1;
    }
};