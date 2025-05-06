class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fastp = head;
        ListNode* slowp = head;

        for(int i=0;i<n;i++){
            fastp = fastp->next;
        }
        if(fastp==nullptr){
            ListNode* temphead = head;
            head = head->next;
            delete temphead;
            return head;
        }
        while(fastp->next != nullptr){
            fastp = fastp->next;
            slowp = slowp->next;
        }

        ListNode* temp = slowp->next;
        slowp->next = slowp->next->next;
        delete temp;
        return head;
    }
};
