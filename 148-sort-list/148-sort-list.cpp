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

ListNode* mergeTwoLists(ListNode* &list1, ListNode* &list2) {
        //recursive way
        // if list1 is empty then list2 will be answer
        if(list1==NULL) return list2;
        
        // if list2 is empty list1 is answer
        if(list2==NULL) return list1;
        
        //if value of first element is smallest then we take that element ans apply recurssion
        
        if(list1->val<= list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
            
        }
        else{
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
        return NULL;
    }
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode *temp=NULL, *slow=head, *fast=head;
        if(head==NULL || head->next==NULL) return head;
        //find miidle point
        while(fast!=NULL and fast->next!=NULL){
            temp=slow;  // to track the previous element of slow
            slow=slow->next;
            fast=fast->next->next;
        }
        
        temp->next=NULL; //to break the linked list in two parts
        ListNode* l1= sortList(head);
        ListNode* l2=sortList(slow);
        
        return mergeTwoLists(l1,l2);
        
    
    }
};