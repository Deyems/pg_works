#include <stdio.h>

int sum(int k);

int main(int argc, char const *argv[])
{
    int summedUp = sum(10);
    printf("The sum of the sequence nos %d \n", summedUp);
    /* code */
    return 0;
}

int sum(int k){
    if(k < 1) return 0;
    return k + sum(k - 1);
}