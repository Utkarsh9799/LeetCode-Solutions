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
        if(m == n)
        return head;
    
        int ctr = 1;
        ListNode* current;
        ListNode* temp = head;
        ListNode* prev;
        ListNode* prevNode;
        ListNode* Bnode;

        while(temp != NULL)
        {

            if(m == 1 && ctr == 1)
            {
                prev = temp;
                prevNode = head;
                Bnode = temp;
                temp = temp->next;
                ctr++;
                continue;
            }

            if(ctr == m - 1)
            {
                prevNode = temp;
                temp = temp->next;
                ctr++;
                continue;
            }

            if(ctr < m - 1)
            {
                temp = temp->next;
                ctr++;
                continue;
            }

            if(ctr == n + 1)
            {
                break;
            }

            if(ctr == m)
            {
                Bnode = temp;
                prev = temp;
                temp = temp->next;
                ctr++;
                continue;
            }

            current = temp;
            temp = temp->next;
            ctr++;
            current->next = prev;
            prev = current;
        }
        
        if(m != 1)
        {
            Bnode->next = temp;
            prevNode->next = prev;
        }
        if(m == 1)
        {
            head = prev;
            prevNode->next = temp;
        }
        return head;
    }
};
