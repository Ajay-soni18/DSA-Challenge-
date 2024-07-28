// We Will Change the connections using prev curr and ans 
// ans  will be used to store the head of new node
// T.C = O(n)
/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* ans = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            if (curr->val == val) {
                if (prev == NULL) {
                    curr = curr->next;
                    ans = curr;
                } else {
                    curr = curr->next;
                    prev->next = curr;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return ans;
    }
};
*/