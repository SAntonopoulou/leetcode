int removeDuplicates(int* nums, int numsSize) {
    int temp[numsSize];
    int number = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(i == 0){temp[number] = nums[i];}
        else{if(temp[number] != nums[i]){++number; temp[number] = nums[i];}}
    }
    for(int i = 0; i <= number; i++){nums[i] = temp[i];}
    return ++number;
}
