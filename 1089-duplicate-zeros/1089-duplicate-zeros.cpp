class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    
          vector<int> vect;
        int i=0 ,j=0;
        
        while(i<arr.size()){
           if(vect.size()==arr.size()) break;
            if(arr[i]==0){
                vect.push_back(arr[i]);
                
                if(vect.size()<arr.size()) vect.push_back(j);
            }
           else  vect.push_back(arr[i]);
            i++;
        }
       // arr.clear();
        
        for(int i=0;i<vect.size();i++){
            arr[i]=vect[i];
        }
        
        
        
    }
};