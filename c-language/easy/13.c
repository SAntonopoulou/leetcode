int romanToInt(char * s){
    int converted_roman_total = 0;

    for(int i = 0; s[i] != '\0'; ++i)
    {
        char next_character = s[i+1];
        switch(s[i])
        {
            case 'I':
                if(next_character == 'V')
                {
                    converted_roman_total += 4;
                    ++i;
                } else if(next_character == 'X')
                {
                    converted_roman_total += 9;
                    ++i;
                } else {
                    ++converted_roman_total;
                }
                break;
            case 'V':
                converted_roman_total += 5;
                break;
            case 'X':
                if(next_character == 'L')
                {
                    converted_roman_total += 40;
                    ++i;
                } else if(next_character == 'C')
                {
                    converted_roman_total += 90;
                    ++i;
                } else {
                    converted_roman_total += 10;
                }
                break;
            case 'L':
                converted_roman_total += 50;
                break;
            case 'C':
                if(next_character == 'D')
                {  
                    converted_roman_total += 400;
                    ++i;
                } else if(next_character == 'M')
                {
                    converted_roman_total += 900;
                    ++i;
                } else {
                    converted_roman_total +=100;
                }
                break;
            case 'D':
                converted_roman_total += 500;
                break;
            case 'M':
                converted_roman_total += 1000;
                break;
        }
    }
    return (converted_roman_total);
}
