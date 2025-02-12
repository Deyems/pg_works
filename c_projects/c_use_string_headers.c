#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char otherAlpha[] = "abcd1234";
    printf("^^** %lu ==> \n", strlen(alphabet));
    printf("The length of string is %lu\n", sizeof(alphabet));

    // strcat(alphabet, otherAlpha);
    // strcpy(alphabet, otherAlpha);
    int isEqual = strcmp(alphabet, otherAlpha);
    // printf("Concatenated letters %s ==< \n", alphabet);
    // printf("Copied letters %s ==< \n", alphabet);
    printf("Are they equal? %d", isEqual);
    /* code */
    return 0;
}
