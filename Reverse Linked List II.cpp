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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *ptr = head, *prevM = NULL;
        int ctr = 1;
        while(ctr < m)
        {
            prevM = ptr;
            ptr = ptr->next;
            ctr++;
        }
        ListNode *next = ptr->next, *prev, *temp = ptr;
        while(ctr < n)
        {
            prev = ptr;
            ptr = next;
            next = ptr->next;
            ptr->next = prev;
            ctr++;
        }
        if(m == 1)
            head = ptr;
        else
            prevM->next = ptr;
        temp->next= next;
        return head;
    }
};
