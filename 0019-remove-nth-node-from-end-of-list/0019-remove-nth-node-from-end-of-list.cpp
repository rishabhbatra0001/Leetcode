class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) return nullptr;
        int len = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        if (n == len) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
        temp = head;

        for (int i = 1; i < len - n; i++) {
            temp = temp->next;
        }

        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};