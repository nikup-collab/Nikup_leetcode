/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
class Solution {
public:
    vector<int>vect;
    TreeNode *help(int i, int j){
        
        if(i>j) return nullptr;
        
        int mid=(i+j)/2;
        TreeNode *temp = new TreeNode(vect[mid]);
        
        temp->left= help(i,mid-1);
        temp->right =help(mid+1, j);
        
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        
        while(head!=NULL){
            vect.push_back(head->val);
            
            head=head->next;
        }
        
        return help( 0, vect.size()-1);
    }
};