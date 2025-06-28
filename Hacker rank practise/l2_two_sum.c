#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returnSize[0] = i;
                returnSize[1] = j;
                break;
            }
        }
    }
    return returnSize;
}

int main()
{
    int numsSize, *nums, target;
    scanf("%d", &numsSize);
    nums = (int *)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) 
    {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);
    int *result = (int *)malloc(sizeof(int) * 2);
    result = twoSum(nums, numsSize, target, result);
    printf("%d\n", result[0]);
    printf("%d\n", result[1]);
    return 0;
}