#include <stdio.h>

int main()
{
    char name[] = "mam";
    int i, j;

    for(i=0;name[i] != '\0';i++)
    {

    }

    j = i-1;

    for(i=0;i<j;i++,j--)
    {
        if(name[i] != name[j])
        {
            printf("Not Palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}