#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *filePtr;
    filePtr = fopen("c_fgets.c", "r");

    fprintf(filePtr, "int try(){}");
    
    fclose(filePtr);

    /* code */
    return 0;
}

/**
 * #include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char yourName [40];
    printf("Enter your full-name \n");
    fgets(yourName, sizeof(yourName), stdin);
    printf("Thank you for banking with us %s\n", yourName);
    // code
return 0;
}

*/
