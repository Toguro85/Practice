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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* addTwoNumbers(listnode* A, listnode* B) {
    listnode* curr=(listnode*)malloc(sizeof(listnode*));
    
    listnode* next=(listnode*)malloc(sizeof(listnode*));
    
    listnode* prev=(listnode*)malloc(sizeof(listnode*));
    listnode* head=(listnode*)malloc(sizeof(listnode*));
    int carry=0,b;
    curr=A;next=B;
    while(curr&&next)
    {
        b=curr->val+next->val+carry;
        carry=0;
        if(b>9)
        {
            carry=b/10;
            b=b%10;
        }
        curr->val=b;
        curr=curr->next;
        next=next->next;
        
    }
    while(curr)
    {
        b=curr->val+carry;
        carry=0;
        if(b>9)
        {
            carry=b/10;
            b=b%10;
        }
        curr->val=b;
        prev=curr;
        curr=curr->next;
    }
    while(next)
    {
        b=next->val+carry;
        carry=0;
        if(b>9)
        {
            carry=b/10;
            b=b%10;
        }
        next->val=b;
        curr->next=next;
        next=next->next;
    }
    
       listnode* prev1=( listnode*)malloc(sizeof(listnode));
    if(carry>0)
    {
        prev1->val=carry;
        prev->next=prev1;
        prev1->next=NULL;
    }
    
    if(curr!=NULL)
    curr->next=NULL;
    curr=A;prev=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    while(head->val==0&&head)
    {
        head=head->next;
    }
    curr=head;prev=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
