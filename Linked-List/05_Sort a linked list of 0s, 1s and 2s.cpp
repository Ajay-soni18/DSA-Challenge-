// Solving Using Count of 0s 1s and 2s
// T.C = O(2*n)
/*
void sortList(Node *head) 
{ 
    int count[3] = {0, 0, 0}; 
    Node *ptr = head; 
 
    while (ptr != NULL) 
    { 
        count[ptr->data] += 1; 
        ptr = ptr->next; 
    } 
 
    int i = 0; 
    ptr = head; 
 
    while (ptr != NULL) 
    { 
        if (count[i] == 0) 
            ++i; 
        else
        { 
            ptr->data = i; 
            --count[i]; 
            ptr = ptr->next; 
        } 
    } 
} 
*/