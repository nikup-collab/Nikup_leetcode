class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> vect;
        
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i!=n/i){
                    vect.push_back(i);
                    vect.push_back(n/i);
                }
                else vect.push_back(i);
            }
        }
        sort(vect.begin(),vect.end());
        if(vect.size()<k) return -1;
        else return vect[k-1];
    }
};