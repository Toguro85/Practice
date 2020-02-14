/*
Input 1:
    A = "((a + b))"
Output 1:
    1
    Explanation 1:
        ((a + b)) has redundant braces so answer will be 1.

Input 2:
    A = "(a + (a + b))"
Output 2:
    0
    Explanation 2:
        (a + (a + b)) doesn't have have any redundant braces so answer will be 0.
        */
        /**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
 struct stack{
     char val;
     struct stack * next;
 };
 struct stack* top=NULL;
 void push(char s)
 {
     struct stack* curr=(struct stack *)malloc(sizeof(struct stack));
     curr->next=top;
     top=curr;
     curr->val=s;
 }
 char peek()
 {
     return top->val;
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
int braces(char* A) {
    int i,n=strlen(A),f=0;
    for(i=0;i<n;i++)
    {
        if(A[i]!=')')
        {
            push(A[i]);
        }
        else if(A[i]==')')
        {
            while(!isempty())
            {
            if(peek()=='('&&f==0)
            {
                return 1;
            }
            else if(peek()!='(')
            {
                if(peek()=='+'||peek()=='-'||peek()=='/'||peek()=='*')
                f=1;
            }
            else if(peek()=='(')
            {
                pop();
                f=0;
                break;
            }
            pop();
            }
        }
    }
    return 0;
}
