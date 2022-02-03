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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head, *fast = head, *slow = head;
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	ListNode *a = NULL;
	while (slow != NULL)
	{
		ListNode *b = slow->next;
		slow->next = a;
		a = slow;
		slow = b;
	}
	while (temp && a)
	{
		if (temp->val != a->val)
		{
			return false;
		}
		temp = temp->next;
		a = a->next;
	}
	return true;
    }
};
