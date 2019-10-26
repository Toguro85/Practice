/*
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true

Example 2:

Input: [1,2,3,4]
Output: false

Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
Time complexity should be less than O(n^2)
*/
int cmp(const void * p,const void * q)
{
    return( *(int*)p - *(int*)q );
}

bool containsDuplicate(int* nums, int numsSize){
    int i;
    qsort(nums,numsSize,sizeof(int),cmp);
    for(i=0;i<numsSize;i++)
    {
        if(i+1<numsSize)
        {
            if(nums[i]==nums[i+1])
            return true;
        }
    }
    return false;
}

