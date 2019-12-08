

int trap(int* height, int heightSize){
    if(heightSize==0||heightSize==1)
        return 0;
    int m=height[0];
    int i,j,l,ans=0;
    for(i=0;i<heightSize;i++)
    {
        if(height[i]>m)
        { 
            m=height[i];
            j=i;
        }
    }
    l=height[0];
    for(i=0;i<j;i++)
    {
        if(height[i]<l)
        {
            ans+=l-height[i];
        }
        else
            l=height[i];
    }
    l=height[heightSize-1];
    for(i=heightSize-1;i>j;i--)
    {
        if(height[i]<l)
            ans+=l-height[i];
        else
            l=height[i];
    }
    return ans;
}

