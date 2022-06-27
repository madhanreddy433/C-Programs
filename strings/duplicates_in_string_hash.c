#include <stdio.h>

int main()
{
    char name[] = "madhanbbcc";
    int H[26] = {0}, i;

    for(i=0;name[i]!='\0';i++)
    {
        H[name[i] - 97]++;
    }

    for(i=0;i<26;i++)
    {
        if(H[i]>1)
            printf("%c is repeated %d times\n", i+97, H[i]);
    }
    return 0;
}