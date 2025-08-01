class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head, *fast = head;
    while (fast && fast->next) {  // for both odd & even numbered nodes
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
    }
};
