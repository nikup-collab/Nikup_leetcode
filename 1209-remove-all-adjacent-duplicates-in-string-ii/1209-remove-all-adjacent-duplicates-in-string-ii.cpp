/* take a pair of character and its frequency and check if its value iss equal to k then pop it out from stack*/







class Solution {
public:                                                        
    string removeDuplicates(string s, int k) {
        int n=s.size();
        
        stack<pair<char,int>>st;
        
        for(int i=0;i<n;i++){
            
            if(st.empty()|| st.top().first!=s[i]) st.push({s[i],1});
            else{
                
                
                    auto prev =st.top();
                    st.pop();
                    st.push({s[i], prev.second+1});
                    
                    if(st.top().second==k)  st.pop();
                

            }
        }
        string str;
        
        while(st.size()>0){
            while(st.top().second!=0){
            str+=st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(str.begin(),str.end());
        
        return str;
    }
};