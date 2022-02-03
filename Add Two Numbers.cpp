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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode *a = l1, *b = l2, *c = &dummy;
        int sum = 0, carry = 0;
        while (a != NULL || b != NULL)
        {
            sum = (a?a->val:0) + (b?b->val:0) + carry;
            carry = sum / 10;
            sum %= 10;
            c->next = new ListNode(sum);
            c = c->next;
            
            if (a != NULL)
            {
                a = a->next;
            }
            if (b != NULL)
            {
                b = b->next;
            }
        }
        
        if (carry > 0)
        {
            c->next = new ListNode(carry);
        }
        return dummy.next;
    }
};
