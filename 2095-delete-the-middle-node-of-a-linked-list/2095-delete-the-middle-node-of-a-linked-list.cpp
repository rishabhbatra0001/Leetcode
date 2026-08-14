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
    ListNode* deleteMiddle(ListNode* head) {

        if (head->next == nullptr)return nullptr;

        int cnt = 0;
        ListNode* start = head;
        while(start){
            start = start->next;
            cnt++;
        }
        int mid = cnt/2;

        ListNode* temp = head;
        while(mid!=1){
            temp = temp->next;
            mid--;
        }
        ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;  
        return head;
    }
};