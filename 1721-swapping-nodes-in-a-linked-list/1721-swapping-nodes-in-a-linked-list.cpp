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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *front=head;
        ListNode *tail=head;
        
        for(int i=1;i<k;i++){
            tail=tail->next;
        }
        ListNode *temp1=tail;
        
        while(tail->next!=NULL){
            front=front->next;
            tail=tail->next;
        }
        
        swap(temp1->val, front->val);
        
        return head;
        
    }
};