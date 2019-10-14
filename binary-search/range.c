
/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int * a=(int *)malloc(sizeof(int)*2);
    a[0]=-1;
    a[1]=-1;
    if(numsSize==0)
    {
        return a;
    }
    else if(numsSize==1)
    {
        if(nums[0]!=target)
            return a;
        else
        {
            a[0]=0;
            a[1]=0;
            return a;
        }
    }
    int l=0,r=numsSize-1,m,lIndex,rIndex;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(l==r)
            break;
        if(nums[m]>target)
            r=m;
        else if(nums[m]<target)
            l=m+1;
        else 
        {
            for(l=m;l>=0;l--)
            {
                if(nums[l]!=target)
                    break;
            }
            lIndex=l+1;
            for(r=m;r<=numsSize-1;r++)
            {
                if(nums[r]!=target)
                    break;
            }
            rIndex=r-1;
            a[0]=lIndex;
            a[1]=rIndex;
            return a;
        }
    }
    if(nums[l]==target)
    {
        for(l=m;l>=0;l--)
            {
                if(nums[l]!=target)
                    break;
            }
            lIndex=l+1;
            for(r=m;r<=numsSize-1;r++)
            {
                if(nums[r]!=target)
                    break;
            }
            rIndex=r-1;
            a[0]=lIndex;
            a[1]=rIndex;
            return a;
    }
    return a;
    
}

