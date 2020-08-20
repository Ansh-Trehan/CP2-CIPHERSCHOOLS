//https://leetcode.com/problems/swap-nodes-in-pairs/

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
class Solution
{
    public:
    ListNode* swapPairs(ListNode* head)
    {
        if(!head||!head->next)
            return head;
        ListNode *n1,*n2,*n3;
        n1 = head; n2 = n1->next; n3 = n2 -> next;
        n2->next = n1;
        n1->next = swapPairs(n3);
        return n2;
    }
};