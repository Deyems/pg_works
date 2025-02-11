#include <stdio.h>

int main(int argc, char const *argv[])
{
    int myNumbers[] = {25, 50, 75, 100, 1001};
    printf("%d \n", myNumbers[0]);

    int defNums[] = {34, 44, 54, 64, 74};
    printf("Print first digit %d \n", defNums[1]);
    
    defNums[1] = 76;
    printf("Print changed value at index One %d \n", defNums[1]);
    printf("This is the size of the %s array %lu \n", "myNumbers", sizeof(myNumbers));

    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for(int i = 0; i < len; i++){
        printf("The value at this point %d \n", defNums[i]);
    }

    /* code */
    return 0;
}
