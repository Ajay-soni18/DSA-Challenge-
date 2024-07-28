// Using Stack 
/*
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode*temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(temp->val!=st.top()) return false;
            st.pop();
            temp=temp->next;
        }
        return true;
        
    }
};
*/

// Reversing The LINKED LIST 
/*
class Solution {
ListNode* reverse(ListNode*head){
    if(head==NULL || head->next == NULL) return head;
    ListNode*newhead=reverse(head->next);
    ListNode*temp=head->next;
    temp->next=head;
    head->next=NULL;
    return newhead;
}
public:
    bool isPalindrome(ListNode* head) {
        ListNode*temp1=head;
        ListNode*temp2=head;
        while(temp2!=NULL && temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        //temp1 at the middle
        temp2=head;
        temp1=reverse(temp1);
        while(temp1 && temp2){
            if(temp1->val!=temp2->val) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
       
        
    }
};
*/