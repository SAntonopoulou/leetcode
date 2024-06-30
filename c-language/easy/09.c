int pop_last(int);
void tokenize(int*, int, int);
int count_digits(int);
int is_positive(int);

bool isPalindrome(int x) {
    if(!is_positive(x)){ return (0); }
    int size = count_digits(x);
    if(size == 0 || size == 1) {return (1); }
    int tokenized_int[size];
    tokenize(tokenized_int, size, x);
    int iterations = size/2;
    for(int i = 0; i < iterations; i++)
    {
        if(tokenized_int[i] != tokenized_int[(size-1)-i]) 
        { return (0); }
    }
    return (1);
}

void tokenize(int* token_array, int size, int x)
{
    int current;
    for(int i = 0; i < size; i++)
    {
        int current = pop_last(x);
        token_array[(size-1)-i] = current;
        x = x/10;
    }
}

int count_digits(int x)
{
    int count = 0;
    while(x > 0)
    {
        ++count;
        x = x/10;
    }
    return count;
}

int pop_last(int x)
{
    int last = x % 10;
    return last;
}

int is_positive(int x)
{ return (x >= 0); }
