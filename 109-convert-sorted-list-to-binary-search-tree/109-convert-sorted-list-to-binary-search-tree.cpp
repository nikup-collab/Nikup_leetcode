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
    TreeNode * help(ListNode* head){
        

        if(head==nullptr) return NULL;


        
        ListNode *slow=head, *fast=head, *prev=NULL;
        
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow= slow->next;
            fast= fast->next->next;
        }
        
        
        TreeNode *temp = new TreeNode(slow->val);
       if(prev){
           prev->next=NULL;
           temp->left = help(head);
           
       }  
        temp->right= help(slow->next);
        
        return temp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        return help(head);
        
    }
};