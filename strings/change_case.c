#include <stdio.h>

void to_lower(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        else if(str[i] >= 97 && str[i] <= 122)
            continue;
    }
    return;
}

void to_upper(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            continue;
        else if(str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    return;
}

void toggle(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        else if(str[i] >= 'a' && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    return;
}

int main()
{
    char str[] = "maDhAn";

    to_lower(str);
    printf("lower case: %s\n", str);
    to_upper(str);
    printf("upper case: %s\n", str);
    char str1[] = "maDhAn";
    toggle(str1);
    printf("toggled: %s\n", str1);

    return 0;
}