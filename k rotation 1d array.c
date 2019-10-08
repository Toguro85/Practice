#include<stdio.h>
int main()
{
    int n,k,i;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of rotations\n");
    scanf("%d",&k);
    printf("Array after %d rotation is\n",k);
    for(i=0;i<n;i++)
    {
        printf("%d",a[(i+k)%n]);
    }
    
}
