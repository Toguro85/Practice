/*
Given pointers to the head nodes of

linked lists that merge together at some point, find the Node where the two lists merge. It is guaranteed that the two head Nodes will be different, and neither will be NULL.

In the diagram below, the two lists converge at Node x:

[List #1] a--->b--->c
                     \
                      x--->y--->z--->NULL
                     /
     [List #2] p--->q

Complete the int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) method so that it finds and returns the data value of the Node where the two lists merge.

Input Format

Do not read any input from stdin/console.

The findMergeNode(SinglyLinkedListNode,SinglyLinkedListNode) method has two parameters,
and

, which are the non-null head Nodes of two separate linked lists that are guaranteed to converge.

Constraints

The lists will merge.
.

.

Output Format

Do not write any output to stdout/console.

Each Node has a data field containing an integer. Return the integer data for the Node where the two lists merge.

Sample Input

The diagrams below are graphical representations of the lists that input Nodes
and are connected to. Recall that this is a method-only challenge; the method only has initial visibility to those

Nodes and must explore the rest of the Nodes using some algorithm of your own design.

Test Case 0

 1
  \
   2--->3--->NULL
  /
 1

Test Case 1

1--->2
      \
       3--->Null
      /
     1

Sample Output

2
3

Explanation

Test Case 0: As demonstrated in the diagram above, the merge Node's data field contains the integer 2.
.
Test Case 1: As demonstrated in the diagram above, the merge Node's data field contains the integer 3.
*/



// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode* cu1=head1;
SinglyLinkedListNode* cu2=head2;
int c1=0,c2=0;
while(cu1)
{
    cu1=cu1->next;
    c1++;
}
while(cu2)
{
    cu2=cu2->next;
        c2++;
        }
int d=abs(c1-c2);
if(c1>c2)
{
    cu2=head2;
    cu1=head1;
    while(d)
    {
      cu1=cu1->next;
      d--;
    }
}
else
{
    cu1=head1;
    cu2=head2;
    while(d)
    {
        cu2=cu2->next;
        d--;
    }
}
while(cu1&&cu2)
{
    if(cu1==cu2)
    {
        break;
    }
    cu1=cu1->next;
    cu2=cu2->next;
}
return cu1->data;
}

