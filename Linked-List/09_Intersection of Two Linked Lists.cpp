// M-1 Using The Length Diff of both the linked list
// T.C = O(3*n)

/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        int lenA=0;
        int lenB=0;
        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        if(lenA>lenB){
            int diff = lenA-lenB;
            for(int i =1 ; i<=diff ; i++){
                tempA=tempA->next;
            }
            
        }
        else{
            int diff = lenB-lenA;
            for(int i =1 ; i<=diff ; i++){
                tempB=tempB->next;
            }
            
        }
        bool flag= false;
            while(tempA!=NULL){
                if(tempA==tempB) 
                {flag = true;
                  break;}
                tempA=tempA->next;
                tempB=tempB->next;
                
            }

        if(flag==true) return tempA;
        else return NULL;


        
    }
};
*/
// M-2 Optimal 
// T.C = O(n)

/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *d1=headA;
        ListNode *d2=headB;
        while(d1!=d2){
            if(d1==NULL) d1=headB;
            else d1=d1->next;
            if(d2==NULL) d2=headA;
            else d2=d2->next;
        }
        return d1;    
    }
};
*/