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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prev = new ListNode(), *ptr = head;
        prev->next = head;
        ListNode *dummy = prev;
        while(ptr && ptr->next)
        {
            if(ptr->val == ptr->next->val)
            {
                int val = ptr->val;
                while(ptr && ptr->val == val)
                {
                    prev->next = ptr->next;
                    delete ptr;
                    ptr = prev->next;
                }
            }
            else
            {
                prev = ptr;
                ptr = ptr->next;   
            }
        }
        return dummy->next;
    }
};
