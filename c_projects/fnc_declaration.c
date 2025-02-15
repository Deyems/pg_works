#include <stdio.h>

int addUp(int x, int y);
int showNumbers(int x, int y);

int main(int argc, char const *argv[])
{
    printf("The addition of the numbers are %d \n", addUp(4, 9));
    /* code */
    return 0;
}

int addUp(int x, int y){
    int show = showNumbers(x, y);
    return x + y;
}

int showNumbers(int x, int y){
    printf("Showing x = %d\n", x);
    printf("Showing y = %d\n", y);
    return 0;
}