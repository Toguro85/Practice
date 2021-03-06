/*
swapping numbers in a window of k spaces
n=number of elements
k=size of window
eg:
Input:
11
1 2 3 4 5 6 7 8 9 10 11
Output:
3 2 1 6 5 4 9 8 7 11 10
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter number of Integers in array\n");
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    int i;
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int k,j,temp;
    printf("Enter the size of window to be rotated:\n");
    scanf("%d",&k);
    for(i=0;i<n;i+=k)
    {
        if(i+k<n)
        {
            for(j=0;j<k/2;j++)
            {
                temp=*(a+i+j);
                *(a+i+j)=*(a+i+k-1-j);
                *(a+i+k-1-j)=temp;
                
            }
        }
        else
        {
            for(j=0;j<(n%k)/2;j++)
            {
                temp=*(a+i+j);
                *(a+i+j)=*(a+n-1-j);
                *(a+n-1-j)=temp;
            }
        }
    }
    printf("The array after %d rotation is\n",k);
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}

