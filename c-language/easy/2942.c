int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* return_array = malloc(wordsSize*sizeof(int));
    int num_words = 0;
    for(int i = 0; i < wordsSize; i++)
    {
        int word_length = strlen(words[i]);
        for(int j = 0; j < word_length; j++)
        {
            if(words[i][j] == x)
	    {
		    return_array[num_words] = i; 
		    num_words++; 
		    break;
	    }
        }
    }
    *returnSize = num_words;
    return return_array;
}
