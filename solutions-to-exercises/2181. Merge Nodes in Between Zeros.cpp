class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* newList = new ListNode();

        ListNode* oldP = head;
        ListNode* newP = newList;

        while(oldP!=NULL){
            oldP = oldP->next;
            int sum = 0;
                while(oldP!=NULL && oldP->val!=0){
                        sum += oldP->val;
                        oldP = oldP->next;
                }
                if(sum!=0){
                    newP->next = new ListNode(sum);
                    newP=newP->next;
                }
        }
        return newList->next;
    }
};
