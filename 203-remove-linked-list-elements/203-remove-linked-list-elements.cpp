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
    ListNode* removeElements(ListNode* head, int val) {
    
        if(head==NULL) return head;
    
            ListNode temphead(-1,head);
        ListNode *first =&temphead, *second=head;
        
        while(second!=NULL){
            if(second->val==val){
                first->next=second->next;
                second=first->next;
                
            }
            else{
            second=second->next;
            first=first->next;
            }
        }
       // if(first->val==val) delete first;
        return temphead.next;
    }
};