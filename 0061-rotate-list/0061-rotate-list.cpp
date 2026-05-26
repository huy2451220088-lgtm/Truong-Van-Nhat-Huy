class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        
        ListNode* tail = head;
        int len = 1;
        while (tail->next) {
            tail = tail->next;
            len++;
        }
        
        tail->next = head;
        k = len - (k % len);
        
        while (k > 0) {
            tail = tail->next;
            k--;
        }
        
        head = tail->next;
        tail->next = nullptr;
        
        return head;
    }
};