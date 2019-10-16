/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* spiralOrder(const int** A, int n11, int n12, int *len1) {
    *len1=n11*n12;
    int *len=malloc(*len1*sizeof(int));
    int j=0,i;
    int up=0,low=n11-1,left=0,right=n12-1;
    while(up<=low&&left<=right)
    {
        for(i=left;i<=right;i++)
        {
            *(len+j)=*(*(A+up)+i);
            j++;
        }
        up++;
        for(i=up;i<=low;i++)
        {
            *(len+j)=*(*(A+i)+right);
            j++;
        }
        right--;
        for(i=right;i>=left;i--)
        {
            *(len+j)=*(*(A+low)+i);
            j++;
        }
        low--;
        for(i=low;i>=up;i--)
        {
            *(len+j)=*(*(A+i)+left);
            j++;
        }
        left++;
    }
    return len;
}
