#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ourNum;
    char ourName[50];

    printf("Enter a number \t");
    // fflush(stdout);
    scanf("%d", &ourNum);
    printf("Enter your names ");
    scanf("%s", ourName);
    printf("welcome your %dth num \n", ourNum);
    printf("%s \n", ourName);
    /* code */
    return 0;
}
