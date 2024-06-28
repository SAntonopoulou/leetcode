#include <string.h>
int removeElement(int* nums, int numsSize, int val) {
    if(numsSize == 0)
    { return 0; }
    int number_of_elements = numsSize;
    int temp_array[number_of_elements];
    int current_array_pos = 0;
    for(int i = 0; i < number_of_elements; i++)
    {
        if(nums[i] != val)
        {
            temp_array[current_array_pos] = nums[i];
            current_array_pos++;
        }
    }
    for(int i = 0; i < numsSize; i++){ nums[i] = 0; }
    memcpy(nums, temp_array, sizeof(temp_array));
    return current_array_pos;
}
