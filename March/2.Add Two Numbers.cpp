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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = new ListNode(0);
        ListNode *res = p;
        int k=0;
        while(l1&&l2) {
            p->val = (k + l1->val + l2->val) % 10;
            k = (k + l1->val + l2->val) / 10;
            l1 = l1->next;
            l2 = l2->next;
            if(l1&&l2)
            {
                p->next = new ListNode(0);
                p = p->next;
            }
        }
        while(l1){
           p->next = new ListNode(0);
           p = p->next;
           p->val = (k + l1->val) % 10;
           k = (l1->val + k) / 10;
           l1 = l1->next;
        }
        while(l2){
           p->next = new ListNode(0);
           p = p->next;
           p->val = (k + l2->val)%10;
           k = (l2->val + k) / 10;
           l2 = l2->next;
        }
        if(k>0){
            p->next = new ListNode(0);
            p = p->next;
            p->val= 1;
         }
        return res;
    }
};