//declaring trie

class TrieNode {
    public:
    bool isendword;
    TrieNode *child[26];
    int count;
    
    TrieNode() {
        isendword=false;
        
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
        count=0;
    }
    
};

//construct a trie

void insert(TrieNode *root, string s){
    
    TrieNode *temp = root;
    int k=0;
    
    for(int i=0;i<s.size();i++){
        
        k = s[i]-'a';
        
        if(temp->child[k]==NULL){
            temp->child[k]= new TrieNode();
        }
        temp->child[k]->count++;
        temp = temp->child[k];
    }
    temp->isendword=true;
}



//check prefix

int check(TrieNode *root, string pref){
    
    TrieNode *temp =root;
    int k=0;
    
    for(int i=0;i<pref.size(); i++){
        
        k = pref[i]-'a';
        
        if(temp->child[k]==NULL) return 0;
        
        temp =temp->child[k];
    }
    
    return temp->count;
}



class Solution :public TrieNode{
public:
	int prefixCount(vector<string>& words, string pref) {
		TrieNode* root= new TrieNode();
		for(string word: words){
			insert(root,word);
		}
		return check(root,pref);
	}
};





// class Solution {
// public:
//     int prefixCount(vector<string>& words, string pref) {
        
//         TrieNode *root;
        
//         for(int i=0;i<words.size(); i++){
//             insert(root, words[i]);
//         }
        
//         return check(root, pref);
        
//     }
// };