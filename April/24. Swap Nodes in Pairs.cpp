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
     ListNode* swapPairs(ListNode* head) {
    	 ListNode* p = head, *p1, *tmp=head;
    	 int count = 0;
    	 while (p != NULL && p->next != NULL){
    		 p1 = p->next;
    		 p->next = p1->next;//step1
    		 p1->next = p;      //step2
    		 p = p->next;       //step3
    		 if (count==0){
    		     head = p1; count++;
    		 }else{
    		    tmp->next = p1;
    		    tmp = p1 -> next;
    		 }
    	 }
    	 return head;
    }
};