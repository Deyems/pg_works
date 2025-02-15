#include <stdio.h>

int main(int argc, char const *argv[])
{
    int myNumbers[5] = {2, 4, 3, 5, 6};
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for(int idx = 0; idx < len; idx++){
        printf("%p \n", &myNumbers[idx]);
    }
    printf("Checking the memory of the entire array pointed to %p\n", myNumbers);
    printf("This pointer in digit %d \n", *(myNumbers + 1));
    printf("Checking the value the array pointed to %d \n", *(myNumbers + 2) );

    int others[5] = {34, 44, 54, 64, 74};
    //pointer loop
    int *ptrVar = others;
    for(int i = 0; i < sizeof(others)/sizeof(others[0]); i++){
        printf("The pointer value loop %d \n", *(ptrVar + i));
    }
    /* code */
    return 0;
}
