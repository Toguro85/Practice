
int search(int* nums, int numsSize, int target){
    int left=0,right=numsSize-1,mid=left+(right-left)/2,d=-1;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(target==nums[mid])
        {
            d=mid;
            break;
        }
        else if(target<nums[mid])
        {
            right=mid-1;
        }
        else if(target>nums[mid])
        {
            left=mid+1;
        }
    }
    return d;
}


