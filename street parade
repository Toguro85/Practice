#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void push(int d)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=top;
    top=temp;
}
void pop()
{
   top=top->next;
}
int isempty()
{
    if(top==NULL)
    return 1;
    return 0;
}
int peek()
{
    return top->data;
}
int main() {
    int n,i;
    aa:scanf("%d",&n);
    if(n==0)
    return 0;
    else
    {
        int a[n],c=0,f=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==c+1)
            {
                c++;
            }
            else if(!isempty()&&peek()==c+1)
            {
                //printf("aya\n");
                while(!isempty())
                {
                 if(peek()==c+1)
                {   
                //printf("aya1\n");
                pop();
                c++;
                }
                else
                break;
                }
                push(a[i]);
            }
            else
            {
                push(a[i]);
            }
        }
        while(!isempty())
        {
            if(peek()!=c+1)
            {
            int g=peek();
            //printf("c=%d peek=%d",c,g);
            f=1;
            }
            else
            c++;
            pop();
        }
        if(f==1)
        printf("no\n");
        else
        printf("yes\n");
    }
    goto aa;
}

