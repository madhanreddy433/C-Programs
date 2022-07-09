#include <stdio.h>
typedef struct
{
    char Name[12];
    int Age;
    float Weight;
    int RollNumber;
} sStudentInfo;

int main()
{
    //Create pointer to the structure
    sStudentInfo *psInfo  = NULL;
    //Increment the pointer
    psInfo++;
    printf("Size of structure  =  %u\n\n",psInfo);
    return 0;
}
