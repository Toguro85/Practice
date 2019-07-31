#include <stdio.h>
int main(void) {
	 int n,i,min,sum,max;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=0;
    sum=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]-min>max)
        max=a[i]-min;
        
    }
    printf("Maximum difference is %d",max);
	return 0;
}

