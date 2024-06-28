int singleNumber(int* nums, int numsSize) {
    int return_int = 0;
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = 0; j < numsSize; j++)
        {
            if(i != j && nums[i] == nums[j]){break;}
            else if(j == numsSize-1){ return nums[i];}
        }
        return_int = nums[i];
    }
    return return_int;
}
