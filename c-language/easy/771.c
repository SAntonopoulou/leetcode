int str_len(char*);

int numJewelsInStones(char* jewels, char* stones) {
 int result = 0;
 char *start = stones;
 for(int i = 0; i < str_len(jewels); i++) {
    while(*stones != '\0'){
     if(*stones == jewels[i]){ result++; }
     stones++;   
    }
    stones = start;
 }
 return result;   
}

int str_len(char* string) {
    int length = 0;
    while(*string != '\0') {
        length++;
        string++;
    }
    return length;
}
