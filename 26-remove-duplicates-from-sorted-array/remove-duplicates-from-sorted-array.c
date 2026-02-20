int removeDuplicates(int* nums, int numsSize) 
{
    int a=0;
    for(int i=0;i<numsSize;i++)
    {
        if(i == numsSize -1 || nums[i]!=nums[i+1])
        {
          nums[a++]=nums[i];
        }
    }
    return a;
}