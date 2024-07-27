// Using 2 Pointer Approach
// T.C = O(n)
/*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode*a=head;
        ListNode*b=head->next;
        while(b!=NULL){
            if(a->val==b->val){
                a->next=b->next;
                b=a->next;
            }
            else{
                a=a->next;
                b=b->next;
            }
        }
        return head;
        
    }
};
*/