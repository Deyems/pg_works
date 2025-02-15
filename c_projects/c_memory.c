#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mainNum = 89;
    printf("The pointer address %p\n", &mainNum);
    int* mainNumPtr = &mainNum;
    // printf("The pointer for mainNum is %p \t\n", mainNumPtr);
    printf("The dereferenced from pointer is %d\n", *mainNumPtr);
    /* code */
    return 0;
}
