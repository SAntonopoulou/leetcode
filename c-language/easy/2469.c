/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double* converted_temperatures = malloc(2*sizeof(double));
    converted_temperatures[0] = (celsius + 273.15); 
    converted_temperatures[1] = ((celsius * 1.80) + 32.00);
    *returnSize = 2;
    return converted_temperatures;
}
