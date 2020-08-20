//https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head)
    {
        if(!head)
            return head;
        if(!head->next)
            return head;
        ListNode* odd=head;
        ListNode* even=odd->next;
        ListNode* on=odd;
        ListNode* en=even;
        while(en&&en->next)
        {
            on->next=en->next;
            en->next=en->next->next;
            on=on->next;
            en=en->next;
        }
        on->next=even;
        return odd;
    }
        
};