/*


Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

*/
/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns 
 */
int ** solve(int A, int *len1, int *len2) {
    int** a=(int **)malloc(sizeof(int*)*A);
    int i,j;
    for(i=0;i<len1;i++)
    {
        a[i]=(int *)malloc(sizeof(int)*i+1);
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                a[i][j]=1;
            }
            else
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    *len1=A;
    *len2=A;
    return a;
}
