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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        //dummy node
        ListNode tempHead(-1,head);
        ListNode *front=&tempHead;
        ListNode *tail=&tempHead;
        
        for(int i=0;i<n;i++){
            tail=tail->next;
        }
        
        while(tail->next!=NULL){
            front=front->next;
            tail=tail->next;
        }
        ListNode *temp2=front->next;
        
        front->next=temp2->next;
        delete(temp2);
        return tempHead.next;
    }
};