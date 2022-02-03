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
    ListNode* merge2Lists(ListNode *a, ListNode *b)
    {
        if (a == NULL)
        {
            return b;
        }
        if (b == NULL)
        {
            return a;
        }
        ListNode *r = NULL;
        if (a->val <= b->val)
        {
            r = a;
            r->next = merge2Lists(a->next, b);
        }
        else
        {
            r = b;
            r->next = merge2Lists(a, b->next);
        }
        return r;
    }
        
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0)
        {
            return NULL;
        }
        if (lists.size() == 1)
        {
            return lists[0];
        }
        int l = lists.size() - 1;
        while (l > 0)
        {
            int i = 0, j = l;
            while ( i < j)
            {
                lists[i] = merge2Lists(lists[i], lists[j]);
                i++;
                j--;
                if (i >= j)
                {
                    l = j;
                }
            }
        }
        return lists[0];
    }
};
