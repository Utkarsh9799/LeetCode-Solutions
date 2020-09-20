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
        if(head == NULL)
            return head;
        bool flag = true;
        ListNode *current = head, *prevNode, *nextNode = head->next;
        while(nextNode != NULL)
        {
            prevNode = current;
            current = nextNode;
            nextNode = current->next;
            current->next = prevNode;
            if(flag) // For first node only
            {
                prevNode->next = NULL;
                flag = false;
            }
        }
        head = current;
        return head;
    }
};
