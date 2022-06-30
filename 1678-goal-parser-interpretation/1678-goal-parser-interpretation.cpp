class Solution {
public:
    string interpret(string command) {
        string s;
        int n=command.size();
       int start=0;
        
        while(start<n){
            if(command[start]=='(' && command[start+1]==')'){
                s=s+'o';
                start=start+2;
            }
            else if(command[start]=='('  && command[start+1]=='a'){
                s=s+'a'+ 'l';
                start=start+4;
            }
            else{
                s=s+'G';
                start++;
            }
        }
        return s;
    }
};