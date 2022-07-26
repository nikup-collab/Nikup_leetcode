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
        
        ListNode tempHead(-1,head);
        
        ListNode* front=&tempHead;
        ListNode * tail=&tempHead;
        
        for(int i=0;i<k;i++){
            tail=tail->next;
        }
        ListNode *temp=tail;
        
        while(tail->next!=NULL){
            tail=tail->next;
            front=front->next;
        }
        
        ListNode *temp2=front->next;
        
        swap(temp->val,temp2->val);
        
        return tempHead.next;
    }
};