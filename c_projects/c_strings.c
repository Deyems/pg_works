#include <stdio.h>

int main(int argc, char const *argv[]){

    char greetings[] = "Hello World";
    printf("Testing declaring strings \"%s\" \n", greetings);
    printf("Accessing elements in string %c -- %c \n", greetings[0], greetings[4]);
    greetings[4] = 'Y';
    printf("Checking the Modified the character in the string -- %s\n", greetings);
    printf("Check the sizeof the strings %lu\n", sizeof(greetings) / sizeof(greetings[0]));
    //loop through a string
    int len = sizeof(greetings);
    for(int idx = 0; idx < len; idx++){
        printf("Printing out each char '%c' in the string >>>\n", greetings[idx]);
    }
    
    return 0;
}