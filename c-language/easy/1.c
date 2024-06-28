/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *values = (int*)malloc(sizeof(int)*2);
    values[0] = 1;
    values[1] = 1;
    for(int i = 0; i < numsSize; i++){
        for(int j = i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                values[0] = i;
                values[1] = j;
                *returnSize = 2;
                return values;
            }
        }
    }
    return NULL;
}
