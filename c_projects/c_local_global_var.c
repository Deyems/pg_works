#include <stdio.h>

int x = 9;

void changeXValue(){
    printf("Increase my value %d \n", ++x);
}

int main(int argc, char const *argv[])
{

    changeXValue();
    printf("The value of x is now finally %d \n", x);
    /* code */
    return 0;
}
