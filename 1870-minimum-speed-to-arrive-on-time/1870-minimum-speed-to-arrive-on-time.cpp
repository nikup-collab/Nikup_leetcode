//creation condition functoion
bool condition(int mid, vector<int> &dist, double hour){
    double sum=0;
    for(int i=0;i<dist.size()-1;i++){
        sum=sum+ceil(dist[i]/(mid*1.0));
    }
    sum+=(dist[dist.size()-1]/(mid*1.0));
    return sum<=hour;
}




#include<bits/stdc++.h>
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left=1, right=10000000;
        int res=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(condition(mid,dist, hour)){
                res=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return res;
    }
};