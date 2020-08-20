//https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
    public:
    ListNode *detectCycle(ListNode *head)
    {
        bool res=false;
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* p=head,* q=head;
        while(p)
        {
            p=p->next;
            q=q->next;
            if(p)p=p->next;
            if(p==q)
            {
                res=true;
                break;
            }
        }
        if(!res)
            return NULL;
        q = head;
        while(q!=p)
        {
            q = q->next;
            p = p->next;
        }
            return q;
    }
};