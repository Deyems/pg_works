#include<stdio.h>

int main(int argc, char const *argv[])
{
    int testInt = 45;
    double testEmptyDouble;
    float testEmptyFloat;
    char testChar;

    printf("Get the size of the integer variable ==> %lu\t\n", sizeof(testInt));
    printf("Get the size of the Double variable ==> %lu\t\n", sizeof(testEmptyDouble));
    printf("Get the size of the Float variable ==> %lu\t\n", sizeof(testEmptyFloat));
    printf("Get the size of the char variable ==> %lu\t\n", sizeof(testChar));
    /* code */
    return 0;
}
