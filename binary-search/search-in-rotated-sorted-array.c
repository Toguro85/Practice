/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.
*/

int search(int* nums, int numsSize, int target){
    int l=0,r=numsSize-1,m;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(nums[m]==target)
            return m;
        else if(nums[l]<=nums[m])
        {
            if(target>=nums[l]&&target<=nums[m])
            r=m-1;
            else
            l=m+1;
        }
        else if(nums[m]<=nums[r])
        {
            if(target>=nums[m]&&target<=nums[r])
                l=m+1;
            else
                r=m-1;
        }
       
    }
     return -1;
}


