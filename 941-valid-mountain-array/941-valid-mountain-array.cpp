#include<bits/stdc++.h>
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int left=1, right=arr.size()-2;
        int idx;
        if(arr.size()==1) return false;
          while(left<=right){
              int mid=left+(right-left)/2;
              
              if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
                  idx=mid;
                  
              }
              if(arr[mid]>arr[mid+1]) right=mid-1;
              else left=mid+1;
          } 
        
        for(int i=0;i<idx;i++){
            if(arr[i]>=arr[i+1]) return false;
        }
        for(int i=idx;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]) return false;
        }
        return true;
        
    }
};