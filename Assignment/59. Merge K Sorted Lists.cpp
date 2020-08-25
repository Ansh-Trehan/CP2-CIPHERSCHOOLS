//https://leetcode.com/problems/merge-k-sorted-lists/

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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        ListNode* head = new ListNode(), *prev=NULL, *curr=NULL;
        int idx = 0;
        prev = head;
        do
        {
            for(int i=0;i<lists.size();i++)
                if(lists[i])
                    if(!curr || (curr->val>lists[i]->val))
                        curr = lists[i], idx = i;
            if(curr)
            {
                prev->next = lists[idx];
                lists[idx] = lists[idx]->next;
            }
            prev = curr;
            curr = NULL;
        } while(prev);
        return head->next;
    }
};