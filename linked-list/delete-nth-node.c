/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
listnode* removeNthFromEnd(listnode* A, int B) {
    B++;
    listnode *fast=(listnode *)malloc(sizeof(listnode*));
    
    listnode *slow=(listnode *)malloc(sizeof(listnode*));
    
    //listnode *prev=(listnode *)malloc(sizeof(listnode*));
    fast=A;slow=A;//prev=NULL;
    while(B&&fast!=NULL)
    {
        fast=fast->next;
        B--;
    }
    while(fast!=NULL)
    {
        fast=fast->next;
        //prev=slow;
        slow=slow->next;
        
    }
    if(slow==A&&B==1)
    return slow->next;
    else if(slow==A&&B>=1)
    {
        return slow->next;
    }
    slow->next=slow->next->next;
    return A;
}
