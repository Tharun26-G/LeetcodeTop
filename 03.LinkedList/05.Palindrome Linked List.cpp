//using list
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listVals;
        while(head){
            listVals.push_back(head->val);
            head = head->next;
        }

        int left =0;
        int right = listVals.size()-1;
        while(left<right){
            if(listVals[left]!=listVals[right]) return false;
            left++;
            right--;
       }

       return true;
    }
};
/*
class Solution {
    ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* front;

    while (curr != nullptr) {
        front = curr->next;  // decide the front
        curr->next = prev;   // Reverse the direction
        prev = curr;         // Move prev one step ahead
        curr = front;        // Move curr one step ahead
    }

    head = prev; 
    return head; // Update head to the new first node (prev)
}
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return true;

        //finding middle
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        //reverse the 2nd half
        ListNode* second = reverse(slow->next);
        ListNode* first = head;

        while(second){
            if(first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};
*/
