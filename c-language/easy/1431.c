bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;
    int largest = 0;
    for(int i = 0; i < candiesSize; i++) {
        if(candies[i] > largest) { largest = candies[i]; }
    }

    bool* result; 
    if(!(result = malloc(sizeof(bool) * candiesSize))){
        return 0;
    }
    
    for(int i = 0; i < candiesSize; i++) {
        result[i] = (bool)((candies[i] + extraCandies) >= largest);
    }

    return result;
}
