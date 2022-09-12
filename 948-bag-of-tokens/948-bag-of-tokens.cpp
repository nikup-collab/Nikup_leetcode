class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(), tokens.end());
        
        int i=0, j= tokens.size()-1;
        int score =0,ans=0;
        while(i<=j){
            
            if(tokens[i] <= power){
                power -= tokens[i];
                score++;
                if(ans<score ) ans = score;
                i++;
            }
            else if( score >0){
                power += tokens[j];
                score--;
                j--;
            }
            else break;
            
        }
        return ans;
    }
};