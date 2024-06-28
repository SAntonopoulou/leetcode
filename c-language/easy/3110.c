int scoreOfString(char* s) {
    int add = 0;
    int total = 0;
    for(int i = 0; i < strlen(s)-1; i++)
    {
        if(i == strlen(s)-1) { add = s[i-1] - s[i]; }
        else { add = s[i] - s[i+1]; }
        if(add < 0 ) { add *= -1; }
        total += add; 
    }
    return total;
}
