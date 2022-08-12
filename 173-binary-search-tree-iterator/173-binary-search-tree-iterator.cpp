/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    vector<int> vect;
    int i=0;
    void help(TreeNode *root){
        if(root==nullptr) return;
        
        help(root->left);
        vect.push_back(root->val);
        help(root->right);
    }
    BSTIterator(TreeNode* root) {
        help(root);
    }
    
    int next() {
        
        return vect[i++];
        
    }
    
    bool hasNext() {
        if(i<vect.size()) return true;
        
        return false;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */