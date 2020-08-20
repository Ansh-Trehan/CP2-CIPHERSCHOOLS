//https://leetcode.com/problems/remove-linked-list-elements/

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
    ListNode* removeElements(ListNode* head, int val)
    {
        for(auto i = head, j = head; head and i; i = i -> next)
        {
            if(i->val == val)
            {
                if(head == i)
                    head = head->next;
                else
                    j->next = i->next;
            }
            else
                 j = i;
        }
        return head;
    }
};