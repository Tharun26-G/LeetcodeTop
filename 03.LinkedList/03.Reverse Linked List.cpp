class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* front;

        while(curr!=nullptr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        head = prev;
        return head;
    }
};
