int numIdenticalPairs(int* nums, int numsSize) {
    int pair_count = 0;
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = 0; j < numsSize; j++) 
        {
            printf("%d|%d\n", nums[i], nums[j]);
            if(nums[i] == nums[j] && i < j)
            {
                pair_count++;
            }
        }
    }
    return pair_count;
}
