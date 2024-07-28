// Itrative Method 
/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*temp=head;
        ListNode*front=NULL;
        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;   
        }
        return prev; 
    }
};
*/

// Recursive 
/*
class Solution {
private: 
    ListNode* helper(ListNode*head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead=helper(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        return helper(head);
    }
};
*/