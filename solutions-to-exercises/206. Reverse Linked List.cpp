class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        struct ListNode *curr = head;
        struct ListNode *prev = NULL;
        struct ListNode *next;

        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        
        return head;
    }
};
