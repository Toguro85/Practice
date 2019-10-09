/*
Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

Example

Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]

*/
/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 int cmp(const void *p,const void * q)
 {
     return(*(int*)p-*(int *)q);
 }
int* wave(int* A, int n1, int *len1) {
    int i,temp,e;
    qsort(A,n1,sizeof(int),cmp);
    if(n1%2!=0)
    e=A[n1-1];
    for(i=0;i<n1;i+=2)
    {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    if(n1%2!=0)
    A[n1-1]=e;
    *len1=n1;
    return A;
}
