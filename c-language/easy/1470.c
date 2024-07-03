/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* new_array = malloc(numsSize*sizeof(int));
    int pos = 0;
    for(int i = 0; i < n;i++)
    {
        new_array[pos++] = nums[i];
        new_array[pos++] = nums[n+i];
    }
    *returnSize = pos;
    return new_array;
}
