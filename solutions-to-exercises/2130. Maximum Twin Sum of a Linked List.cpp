class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next;
        }
        int s = 0;
        int n = v.size();
        for (int i=0; i<n/2;i++){
            s=max(s, v[i]+v[n-i-1]);
        }
        return s;
    }
};
