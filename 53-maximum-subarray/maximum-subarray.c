int maxSubArray(int* nums, int numsSize) 
{
    int curSum=nums[0],maxSum=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(curSum<0)
           curSum=nums[i];
        else
        curSum=curSum+nums[i];
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
    }
    return maxSum;
}