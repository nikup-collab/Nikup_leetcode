class Solution {
public:
    int uniquePaths(int m, int n) {
          int N = m+n-2;
        int r=m-1;
        double c=1;
        for(int i=1;i<=r;i++){
            c=c*(N-r+i)/i;
            
        }
        return int(c);
    }
};