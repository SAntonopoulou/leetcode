char * defangIPaddr(char * address){
    int length = strlen(address);
    int new_length = length + (2*3);
    char* new_address = (char*)malloc((new_length + 1) * sizeof(char));;
    int insert_position = 0;
    for(int i = 0; i < length; i++){
        if(address[i] == '.') { 
            new_address[insert_position++] = '[';
            new_address[insert_position++] = '.';
            new_address[insert_position++] = ']'; 
        }
        else { new_address[insert_position++] = address[i]; }
    }
    new_address[insert_position] = '\0';
    return new_address;
}
