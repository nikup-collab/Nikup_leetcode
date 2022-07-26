/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *fast=head, *slow=head, *curr=head;
        
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            
            if(slow==fast){
                while(slow!=curr){
                    curr=curr->next;
                    slow=slow->next;
                }
                return slow;
            }
            
        }
        return NULL;
    }
};