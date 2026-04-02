#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    *returnSize = 2;
    int* data = (int*)malloc(2*sizeof(int));
    for(int i = 0; i < numsSize; i++)\
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                data[0] = i;
                data[1] = j;
                return data;
            }
       
        }
    }
    *returnSize = 0;
    return NULL;
}
