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
    ListNode* reverseList(ListNode* head) {
        ListNode *a = NULL, *b = head, *c;
        while (b != NULL)
        {
            c = b->next;
            b->next = a;
            a = b;
            b = c;
        }
        head = a;
        
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *a = reverseList(l1);
        ListNode *b = reverseList(l2);
        
        ListNode dummy(0);
        ListNode *p = a, *q = b, *c = &dummy;
        int sum = 0, carry = 0;
        while (p != NULL || q != NULL)
        {
            sum = (p?p->val:0) + (q?q->val:0) + carry;
            carry = sum / 10;
            sum %= 10;
            
            c->next = new ListNode(sum);
            c = c->next;
            
            if (p != NULL)
            {
                p = p->next;
            }
            if (q != NULL)
            {
                q = q->next;
            }
        }
        if (carry > 0)
        {
            c->next = new ListNode(carry);
        }
        ListNode *d = reverseList(dummy.next);
        return d;
    }
};
