#include<bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> vect(m+n);
        
        int k=0, i=0,j=0;
        
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                vect[k++]=nums1[i++];
            }
            
            else if(nums1[i]>nums2[j]) vect[k++]=nums2[j++];
            
            else{
                vect[k++] = nums1[i++];
                vect[k++]=nums2[j++];
            }
        }
        
        for(;j<n;j++){
            vect[k++]=nums2[j];
        }
        
        for(;i<m;i++) vect[k++]=nums1[i];
        for(int i=0;i<(m+n);i++){
            nums1[i]=vect[i];
        }
    }
};