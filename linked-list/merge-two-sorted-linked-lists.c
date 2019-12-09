
// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* p=NULL;
    if(head1==NULL)
    return head2;
    else if(head2==NULL)
    return head1;
    if(head1->data<=head2->data)
    {
        p=head1;
        p->next=mergeLists(head1->next,head2);
    }
    else
    {
        p=head2;
        
        p->next=mergeLists(head2->next,head1);
    }
    return p;

}

int main()
