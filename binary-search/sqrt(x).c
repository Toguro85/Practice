int mySqrt(int x){
int l=1,r=x,m;
    if(x<=1)
        return x;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(x/m==m)
            return m;
        else if(x/m>m)
        {
            if(x/(m+1)<m+1)
                return m;
            l=m+1;
        }
        else
            r=m-1;
    }
    return l;
}
