// Using The Basic Concept Of Merge Sort 
// using dummy Node 

/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp=new ListNode(100);
        ListNode*dummy=temp;
        while(list1 && list2){
            if(list1->val<list2->val){
                dummy->next=list1;
                list1=list1->next;
                dummy=dummy->next;
            }
            else{
                dummy->next=list2;
                list2=list2->next;
                dummy=dummy->next;
            }
        }
        if(list1) dummy->next=list1;
        if(list2) dummy->next=list2;
        ListNode* newhead = temp->next;
        delete temp;
        return newhead;
        
    }
};
*/