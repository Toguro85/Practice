/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void rotate(int** A, int n11, int n12) {
    int i,j,temp,k=0;
    for(i=0;i<n11;i++)
    {
        for(j=0;j<n12;j++)
        {
            if(i+j>=k)
            {
            temp=*(*(A+i)+j);
            
            *(*(A+i)+j)=*(*(A+j)+i);
            *(*(A+j)+i)=temp;
            }
        }
        k+=2;
    }
    j=0;
    while(j<n12/2)
    {
    for(i=0;i<n11;i++)
    {
            temp=*(*(A+i)+j);
            *(*(A+i)+j)=*(*(A+i)+n12-j-1);
            *(*(A+i)+n12-j-1)=temp;
            
    }
    j++;
    }
}

