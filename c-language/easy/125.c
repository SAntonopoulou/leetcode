int is_alphanum(char c)
{
    if((c >= 48 && c <= 57) || (c >= 65 && c<= 90) || (c >= 97 && c <= 122)){return 1;}else{return 0;}
}

int determine_length_alphanum(char* string, int length)
{
    int alpha_num_length = 0;
    for(int i = 0; i < length; i++){if(is_alphanum(string[i])){alpha_num_length++;}}
    return alpha_num_length;
}

char to_lower(char c)
{
    if(c >= 65 && c <= 90){ c+=32; return c;}
    else { return c;}
}

void reverse_string(char* string, char* destination, int length)
{
    for(int i = 0; i < length-1; i++)
    {
       destination[i] = string[(length-2) - i];
    }
    destination[length-1] = '\0';
}

bool isPalindrome(char* s) {
    int return_value=0;
    int length = strlen(s);
    int stripped_length = determine_length_alphanum(s, length);
    char* stripped = malloc((stripped_length+1)*sizeof(char));
    int placed = 0;
    for(int i = 0; i < length; i++)
    { if(is_alphanum(s[i])){stripped[placed] = to_lower(s[i]); placed++;} }
    stripped[placed] = '\0';
    char* reversed = malloc((stripped_length+1)*sizeof(char));
    reverse_string(stripped, reversed, stripped_length+1);
    if(!strcmp(stripped, reversed)){return_value = 1;}
    free(stripped);
    free(reversed);
    return return_value;
}
