int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc((numsSize*2)*sizeof(int));
    *returnSize = (numsSize*2);
    for(int i = 0; i < numsSize; i++)
    { 
        ans[i] = nums[i];
        ans[(numsSize)+i] = nums[i];
    }
    return ans;
}
