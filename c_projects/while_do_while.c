#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;

    do
    {
        printf("Value of i is %d \n", i);
        i++;
    }while (i < 5);
    
    while(i < 8){
        printf("Testing while part too >>> %d \n", i);
        i++;
    }
    /* code */
    return 0;
}
