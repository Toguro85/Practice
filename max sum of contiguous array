/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 #define MAX(x, y) ((x > y) ? x : y)
int maxSubArray(const int* A, int n1) {
    int sum=A[0],max=A[0],i;
    for(i=0;i<n1;i++)
    {
         sum=MAX(sum+A[i],A[i]);
         if(sum>max)
         max=sum;
    }
    return max;
}
