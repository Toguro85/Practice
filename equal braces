#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();


// Complete the braces function below.

// Please store the size of the string array to be returned in result_count pointer. For example,
// char a[2][6] = {"hello", "world"};
//
// *result_count = 2;
//
// return a;
//
struct stack
{
    char data;
    struct stack* next;
};
struct stack* top=NULL;
void push(char d)
{
    struct stack* e=(struct stack*)malloc(sizeof(struct stack));
    e->data=d;
    e->next=top;
    top=e;
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
char tp()
{
    return top->data;
}
char** braces(int values_count, char** values, int* result_count) {
     int i,j,f;
     char** a=(char **)malloc(sizeof(char *)*values_count);
     char* b="YES";
     char* c="NO";
     for(i=0;i<values_count;i++)
     {
         a[i]=(char *)malloc(sizeof(char)*4);
         j=0,f=0;
         while(values[i][j]!='\0')
         {
             if(values[i][j]=='('||values[i][j]=='{'||values[i][j]=='[')
             {
                 push(values[i][j]);
             }
             else if(values[i][j]==')')
             {
                 if(isempty()||tp()!='(')
                 {
                     f=1;
                     break;
                 }
                 else
                 pop();
             }
             else if(values[i][j]==']')
             {
                 if(isempty()||tp()!='[')
                 {
                     f=1;
                     break;
                 }
                 else
                 pop();
             }
             else if(values[i][j]=='}')
             {
                 if(isempty()||tp()!='{')
                 {
                     f=1;
                     break;
                 }
                 else
                 pop();
             }
             j++;
             
         }
         if(!isempty())
         {
             f=1;
             while(!isempty())
             pop();
         }
         if(j%2!=0)
             f=1;
         if(f==0)
         {
             a[i]=b;
         }
         else
         a[i]=c;
         f=0;
     }
     *result_count=values_count;
     return a;

}

int main()
