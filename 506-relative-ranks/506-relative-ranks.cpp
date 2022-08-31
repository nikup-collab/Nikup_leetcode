class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<pair<int,int>> maxh;
        
        for(int i=0;i<score.size();i++){
            maxh.push({score[i],i});
        }
        vector<string> vect(score.size());
        int count=0;
        while(!maxh.empty()){
            
            int i= maxh.top().second;
           
            
            if(count==0) vect[i]="Gold Medal";
            else if(count==1) vect[i]="Silver Medal";
            else if(count==2) vect[i]= "Bronze Medal";
            else vect[i] = to_string(count+1);
            
            count++;
            maxh.pop();
        }
        return vect;
    }
};