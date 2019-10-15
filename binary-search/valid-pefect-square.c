/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true

Example 2:

Input: 14
Output: false

*/


bool isPerfectSquare(int num){
    int l=1,r=num;
    long m=0;
    if(num<=1)
        return true;
    while(l<=r)
    {
        m=l+(r-l)/2;
       // printf("%d ",m);
        if((m*m)==num)
            return true;
        else if(l==r)
            break;
        else if((m*m)<num)
            l=m+1;
        else if((m*m)>num)
            r=m;
    }
    return false;
}


