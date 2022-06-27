#include <stdio.h>

int main()
{
    char name[] = "madhanaabb";
    int i, j, count;

    for(i=0;name[i]!='\0';i++)
    {
        count = 1;
        if(name[i] != -1)
        {
            for(j=i+1;name[j]!='\0';j++)
            {
                if(name[i] == name[j])
                {
                    count++;
                    name[j] = -1;
                }
            }
            if(count > 1)
                printf("%c is repeated %d times\n", name[i], count);
        }
    }
    return 0;
}