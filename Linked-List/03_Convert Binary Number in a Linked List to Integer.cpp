// There are Two Method 
// M-1 Calculate the length of LL and Make MSB
// T.C = O(3*n)
/*
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode*temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        int max = 1 ;
        for(int i=0;i<len-1;i++) max*=2;

        temp=head;
        int result=0;
        while(temp){
            int val = temp->val;
            result+=max*val;
            max/=2;
            temp=temp->next;
        }
        return result;
        
    }
};
*/

// M-2 Reverse The LL , In This Method You Dont have to Calculate MSB

/*
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {

        int n = 0;
        int place = 1;
        ListNode* temp = reverse(head);
        while(temp!=NULL){
            n += (place*temp->val);
            temp = temp->next;
            place*=2;
        }
        return n;
    }
};
*/