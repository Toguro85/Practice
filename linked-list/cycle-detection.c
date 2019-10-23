

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
int f=0;
if(head==NULL)
return false;
SinglyLinkedListNode* slow=head;
SinglyLinkedListNode* fast=head;

fast=fast->next->next;
slow=slow->next;
while(fast&&fast->next)
{
/*fast=fast->next->next;
slow=slow->next;*/
if(slow==fast)
{
    f=1;
    break;
}

fast=fast->next->next;
slow=slow->next;
}
if(f==0)
{
    return false;
}
return true;
}

