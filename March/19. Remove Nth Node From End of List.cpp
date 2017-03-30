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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    	ListNode *p = head, *temp;
    	vector<ListNode *>address;
    	while (p->next){
    		address.push_back(p);
    		p = p->next;
    	}
    	address.push_back(p);
    	int size = address.size();
    	if (n < size){
    		p = address[size - n -1];
    		temp = p -> next;
    		p->next = temp->next;
    		free(temp);
    	}
    	else{
    		head = head->next;
    	}
    	return head;
    }
};