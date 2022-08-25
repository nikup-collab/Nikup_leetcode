//declaration of ds
class trienode {
    public: 
    bool isendword;
    trienode *child[26];
    
    trienode() {
        isendword=false;
        
        for(int i=0;i<26; i++)
            child[i]=NULL;
        
    }
    
};

void insert(trienode *root,string  word){
    trienode *curr=root;
    int k=0;
    for(int i=0;i<word.size();i++){
        
        k= word[i]-'a';
        if(curr->child[k]==NULL){
            curr->child[k]= new trienode();
        }
        curr= curr->child[k];
    }
    curr->isendword= true;
}

class MagicDictionary {

public:
    trienode *root;
    MagicDictionary() {
      root = new trienode();   
    }
    
    void buildDict(vector<string> dictionary) {
        
        for(auto word: dictionary){
            insert(root, word);
        }
    }
    
    bool search(string searchWord){
        
        // false value of isOneLetterChanged signifies that no letter is changed
        
        return search(searchWord,root,0,false);
    }
    
    bool search(string searchWord, trienode *root, int start, bool isOneLetterChanged) {
        
        if(start==searchWord.length())  {
           
            return root->isendword && isOneLetterChanged;
        }
        trienode *curr=root;
        int k=0;
        for(int i=start;i<searchWord.length();i++){
            k=searchWord[i]-'a';
            if(isOneLetterChanged){
                
                // if one letter is already changed then we can't change it to anything else
                
                if(curr->child[k]==NULL)    return false;
                return search(searchWord,curr->child[k],i+1,isOneLetterChanged);
            }else{
                
                // if no letter is changed then we have option to either change a letter
                
                for(int j = 0 ; j<26 ; j++){
                    if(curr->child[j]!=NULL){
                        if(k==j && search(searchWord,curr->child[j],i+1,isOneLetterChanged)){
                            return true;                            
                        }else if(k!=j && search(searchWord,curr->child[j],i+1,!isOneLetterChanged)){
                            return true;
                        }
                    }
                }
                return false;
           }
                  
        }
        return false;
        
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */