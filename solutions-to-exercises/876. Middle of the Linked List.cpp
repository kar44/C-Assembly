class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *f = head;
        ListNode *s = head;
        while(f && f->next){
            f = f->next->next;
            s = s->next;
        }
        return s;
    }
};
