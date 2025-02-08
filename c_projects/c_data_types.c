#include <stdio.h>

int main(int argc, char const *argv[])
{
    char myGrade = 'A';
    char asciiGrade = 65;
    float myCGPA = 3.45;
    printf("My grade is %c \t\n", myGrade);
    printf("My GPA is cumulatively %f \n", myCGPA);
    printf("ASCII value of my Grade == to character is %c \n", asciiGrade);
    // char myText = 'Hell Lolly';
    char myLongText[] = "Light of the World";
    // printf("Checking what mistake of string to character will cause %c \n", myText);
    printf("Printing what text is using == %s \n", myLongText);

    float floatTest = 35e3;
    printf("Float number check == %.2f \n", floatTest);

    /* code */
    return 0;
}
