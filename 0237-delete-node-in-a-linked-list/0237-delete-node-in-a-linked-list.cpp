/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;

        temp->val = temp->next->val;
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};