/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int strStr(const char* A, const char* B) {
     //A=str B=pat
     if(A==NULL||B==NULL)
     return -1;
     int m=strlen(B);
     int lps[m],i=1,len=0;
     lps[0]=0;
     while(i<m)
     {
         if(B[i]==B[len])
         {
             len++;lps[i]=len;i++;
         }
         else
         {
             if(len!=0)
             len=lps[len-1];
             else
             {
                 lps[i]=0;
                 i++;
             }
         }
     }
     int j=0;i=0;
     int n=strlen(A);
     while(i<n)
     {
         if(B[j]==A[i])
         {
             j++;
             i++;
         }
         if(j==m)
         return i-j;
         else if(i<n&&B[j]!=A[i])
         {
             if(j!=0)
             j=lps[j-1];
             else
             i++;
         }
     }
     return -1;
}
