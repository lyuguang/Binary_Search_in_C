#include <stdio.h>
#include <stdlib.h>

int search(int* nums, int numsSize, int target);

int main(void){
    int nums[] = {-1,0,3,5,9,12};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int target = 9;
    int result = search(nums, numsSize, target);
    printf("result = %d\n", result);
    return 0;
}

// 1. Binary search
int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    while(left <= right){
        // mid point
        int mid = left + (right-left)/2;
        // if target is equal to mid, return mid
        if(nums[mid] == target)
            return mid;
        // if target is greater than mid, search right
        else if(target > nums[mid])
            left = mid+1;
        // if target is less than mid, search left
        else
            right = mid-1;
    }
    return -1;
}