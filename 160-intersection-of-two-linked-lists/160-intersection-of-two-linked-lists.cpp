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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* ,int> m;
        ListNode *temp=headA, *temp2=headB;
        
        while(temp!=NULL){
            m[temp]++;
            temp=temp->next;
        }
        
        while(temp2!=NULL){
            if(m.find(temp2)!=m.end()) return temp2;
            
            m[temp2]++;
            temp2=temp2->next;
        }
       return NULL; 
        
    }
};