void sortColors(int* nums,int numSize)
{
    int low=0,high=numSize-1,mid=0,temp;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            temp=nums[low];
            nums[low]=nums[mid];
            nums[mid]=temp;
            low++;
            mid++;
        }
        else if(nums[mid]==1)
        {
             mid++;
         }
        else
        {
             temp=nums[mid];
             nums[mid]=nums[high];
             nums[high]=temp;
             high--;
        }
    }
}