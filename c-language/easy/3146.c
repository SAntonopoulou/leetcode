int find_index(char* haystack, char needle, int length)
{
    for(int i = 0; i < length; i++)
    {
        if(haystack[i] == needle){return i;}
    }
    return 0;
}

int findPermutationDifference(char* s, char* t) {
    int perm_diff = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        int num = find_index(t, s[i], strlen(t));
        perm_diff += i-num>=0?i-num:(i-num)*-1;
    }
    return perm_diff;
}
