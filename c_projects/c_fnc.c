#include <stdio.h>

void showName(char name[]){
    printf("The entered name is %s\n", name);
}

int calculateSum(int x, int y)
{
    int sum = x + y;
    printf("Solving the sum is %d\n", sum);
    return sum;
}

int main(int argc, char const *argv[])
{
    showName("gbegiri");
    showName("tony");
    showName("Adelove");
    printf("Enter numbers you want to sum up \n");
    int firstNum; int secondNum;
    scanf("%d\n", &firstNum);
    scanf("%d", &secondNum);
    calculateSum(firstNum, secondNum);
    calculateSum(9, 9);
    /* code */
    return 0;
}

