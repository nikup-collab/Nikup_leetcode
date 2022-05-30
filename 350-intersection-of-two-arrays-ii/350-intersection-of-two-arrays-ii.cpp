class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
                map<int, int>m;
        vector<int>vect;
        
        for(int i=0;i<nums1.size();i++){     //creating a map to store number of elements 
            m[nums1[i]]++;                  //nums1[]={1,2,2,2,1};  1:2, 2:3;
        }
        
        //check whther the elemtns of nums2 present in map or not and decrease the count
        
        for(int i=0;i<nums2.size();i++){
            auto it=m.find(nums2[i]);
            if(it!=m.end() && it ->second>0){
                vect.push_back(nums2[i]);
                it->second--;
            }
        }
    
       return vect; 
        
    }
};