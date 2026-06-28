#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] == target - nums[i]) {
                int* result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize =0;
    return NULL;
}
    int main()
    {
        int nums[]={2,7,11,15};
        int numsSize=4;
        int target=9;
        int returnSize;
        int* result=twoSum(nums,numsSize,target,&returnSize);
        if(returnSize==2)
        {
            printf("[%d,%d]\n",result[0],result[1]);
            free(result);
        }
        else{
            printf("No solution found\n");
        }
        return 0;
    }
