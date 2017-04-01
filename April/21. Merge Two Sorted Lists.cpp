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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head, *p; int count=0;
        while(l1 != NULL && l2!= NULL){
            if(!count){
                head = l1->val<l2->val?l1:l2;
                p = head;
                count++;
            }else{
                p->next = l1->val<l2->val ? l1:l2;
                p=p->next;
            }
            if(p==l1) l1=l1->next; else l2 = l2->next;
        }
        if(count==0){
            head = l1==NULL ? l2:l1;
        }
        else{
            p->next = l1==NULL?l2:l1;
            
        }
        return head;
    }
};