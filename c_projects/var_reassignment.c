#include <stdio.h>

int main(){
    int myNum = 45;
    int myOtherNum = 55;

    printf("The value BEFORE re-assigning is %d \n", myNum);
    
    myNum = 40;
    printf("The value AFTER re-assigning is %d \n", myNum);

    int x = 5;
    int y = 9;

    int sum = x + y;
    printf("The sum of the above numbers x = %d and y = %d is \t %d \n", x, y, sum);

    return 0;
}