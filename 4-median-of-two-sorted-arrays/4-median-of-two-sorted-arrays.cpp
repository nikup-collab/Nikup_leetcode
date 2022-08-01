class Solution {
public:
    vector<int>vect;
    void mergesort(vector<int>&nums1, vector<int>&nums2){
        int n=nums1.size(), m=nums2.size();
        int i=0, j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                vect.push_back(nums1[i]);
                i++;
            }
            else{
                if(nums1[i]>=nums2[j]){
                    vect.push_back(nums2[j]);
                    j++;
                }
            }  
        }
        
        for(int a=i;a<n;a++) vect.push_back(nums1[a]);
        for(int l=j;l<m;l++) vect.push_back(nums2[l]);
        
        
        
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        mergesort(nums1,nums2);
        
        double med=0;
        
        int n=vect.size();
        
        if(n%2!=0){
            return double(vect[n/2]);
        }
        else{
            med= double((vect[n/2]+vect[n/2-1]))/2;
            return med;
        }
        return -1;
        
    }
};