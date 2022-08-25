// declarng a trie
class trienode {
    public:
    bool isendword;
    trienode *child[26];
    trienode() {
        isendword=false;
        
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};


void insert(trienode *root, string s){
    trienode *curr = root;
    int k=0;
    
    for(int i=0;i<s.size(); i++){
        k= s[i]-'a';
        
        if(curr->child[k]==NULL) {
            curr->child[k]= new trienode();
        }
        curr= curr->child[k];
    }
    curr->isendword=true;
}

bool check(trienode *root, string s){
    
    trienode *curr=root;
    int k=0;
    
    for(int i=0;i<s.size(); i++){
        k=s[i]-'a';
        
        if(curr->child[k]==NULL) return false;
        
        curr= curr->child[k];
    }
    return true;
}






class Solution  : public trienode 
{
public:
    trienode *root;
    int countPrefixes(vector<string>& words, string s) {
    root= new trienode();
        insert(root, s);
        int count=0;
        for(int i=0;i<words.size();i++){
            
            if(check(root, words[i])==true) count++;
        }
        return count;
    }
};