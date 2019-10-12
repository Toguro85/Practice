/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

You may assume no duplicate exists in the array.

Example 1:

Input: [3,4,5,1,2] 
Output: 1

Example 2:

Input: [4,5,6,7,0,1,2]
Output: 0

*/


int findMin(int* nums, int numsSize){
    int l=0,r=numsSize-1,m;
    while(l<r)
    {
        m=l+(r-l)/2;
        if(nums[m]>nums[r])
        {
            l=m+1;
        }
        else if(nums[m]<nums[r])
            r=m;
    }
return nums[l];
}


