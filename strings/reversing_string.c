#include <stdio.h>

int main()
{
    char name[] = "madhan", tmp;
    int i, j;

    for(i=0;name[i] != '\0'; i++)
    {

    }

    j = i-1;

    for(i=0;i<j;i++)
    {
        //swap the characters
        tmp = name[i];
        name[i] = name[j];
        name[j] = tmp;
        j--;
    }
    
    printf("reverse string is: %s\n", name);

    return 0;
}