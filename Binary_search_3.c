#include <stdio.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target);

int main(void){
    int nums[] = {1,3,5,6};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int target = 5;
    int result = searchInsert(nums, numsSize, target);
    printf("result = %d\n", result);
    return 0;
}

int searchInsert(int* nums, int numsSize, int target){
    int left = 0, right = numsSize-1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(nums[mid] == target)
            return mid;
        else if(target > nums[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}