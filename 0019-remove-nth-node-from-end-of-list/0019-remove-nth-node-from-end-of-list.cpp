/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Di chuyển fast tiến về phía trước n bước
        for (int i = 0; i <= n; ++i) {
            fast = fast->next;
        }

        // Di chuyển cả hai cho đến khi fast chạm cuối danh sách
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Xóa node thứ n từ cuối (node sau slow)
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};