#include<bits/stdc++.h>
class Solution {
public:
    double average(vector<int>& salary) {
        int n = sizeof(salary)/sizeof(salary[0]);
        int min=*min_element(salary.begin(),salary.end());
        int max = *max_element(salary.begin(), salary.end());
        double sum=0;
        for(int i=0;i<salary.size();i++){
            sum=sum+salary[i];
        }
        double average = (sum- max-min)/(salary.size()-2);
        return average;
    }
};