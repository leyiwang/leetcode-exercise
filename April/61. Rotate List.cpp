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
    ListNode *rotateRight(ListNode *head, int k) {
    	ListNode *p1 = head, *p2 = head, *tmp=head;
    	int count = 0;
    	while (tmp != NULL){
    		count++;
    		tmp = tmp->next;
    	}
    	if(count==0){
    	    return head;
    	}
    	k = k % count;
    	for (int i = 0; i < k; i++) {
    		if (p1 == NULL)
    			return head;
    		p1 = p1->next;
    	}
    	if (p1 == NULL)
    		return head;
    	while (p1 -> next != NULL) {
    		p1 = p1->next;
    		p2 = p2->next;
    	}
    	p1->next = head;
    	tmp = p2->next;
    	p2->next = NULL;
    	return tmp;
    }
};