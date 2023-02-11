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
               if (head == NULL)
        {
            return head ;
        }
        ListNode *curr = head ;
        while (curr -> next != NULL)
        {
            if (curr -> val == curr -> next -> val)
            {
                ListNode *nextnext = curr -> next -> next;
                ListNode *toDelete = curr -> next ;
                delete(curr -> next);
                curr -> next = nextnext ;
            }

            else
            {
                curr = curr -> next ; 
            }

        }
        return head ;
    }
};
