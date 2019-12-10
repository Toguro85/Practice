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
 * 
 * @Output Integer
 */
int lPalin(listnode* A) {
    listnode *slow=(listnode *)malloc(sizeof(listnode*));
    listnode *fast=(listnode *)malloc(sizeof(listnode*));
    slow=A;fast=A;
    int f=0;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        
        fast=fast->next->next;
    }
    if(fast->next)
    {
    fast=fast->next;
    f=1;
    }
    listnode *slow1=(listnode *)malloc(sizeof(listnode));
    listnode *prev=(listnode *)malloc(sizeof(listnode));
    listnode *st=(listnode *)malloc(sizeof(listnode));
    listnode *next1=(listnode *)malloc(sizeof(listnode));
    
    st=slow->next;
    /*if(f==1)
    st=st->next;*/
    prev=NULL;
    slow1=A;
    if(f==0)
    {
    while(slow1->next!=slow)
    {
        next1=slow1->next;
        slow1=prev;
        prev=slow1;
        slow1=next1;
    }
    }
    else
    {
     while(slow1->next!=slow)
    {
        next1=slow1->next;
        slow1=prev;
        prev=slow1;
        slow1=next1;
    }   
    }
    
   // printf("%d %d ",st->val,slow->val);
    while(st!=NULL)
    {
        if(st->val!=slow1->val)
        return 0;
        st=st->next;
        slow1=slow1->next;
    }
    return 1;
}
