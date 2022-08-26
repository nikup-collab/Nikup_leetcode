class Solution {
public:
    bool reorderedPowerOf2(int n) {
      
        if(n==1) return true;
        long long  num=2;
        string b=to_string(n);
        sort(b.begin(), b.end());
        
        while(num<INT_MAX){
            string a= to_string(num);
            sort(a.begin(), a.end());
            
            if(a==b) return true;
            num*=2;
        }
        
        return false;
    }
};




// if(n==1)return true;
//         long long num=2;
//         string b=to_string(n);
//         sort(b.begin(), b.end());
//         while(num<INT_MAX){
//             string a=to_string(num);
//             sort(a.begin(), a.end());
//             if(a==b)return true;
//             num*=2;
//         }
//         return false;