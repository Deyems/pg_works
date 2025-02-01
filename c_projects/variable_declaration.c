#include <stdio.h>

int main()
{
    int saver = 90;
    // printf(saver); // throws an error.
    /**
     * variable_declaration.c:5:12: warning: incompatible integer to pointer conversion passing 'int' to parameter of type 'const char *' [-Wint-conversion]
    printf(saver);
           ^~~~~
        /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:167:36: note: passing argument to parameter here
        int      printf(const char * __restrict, ...) __printflike(1, 2);
                                            ^
        variable_declaration.c:5:12: warning: format string is not a string literal (potentially insecure) [-Wformat-security]
            printf(saver);
                ^~~~~
        variable_declaration.c:5:12: note: treat the string as an argument to avoid this
            printf(saver);
                ^
                "%s",
        2 warnings generated.
        /bin/sh: line 1: 27083 Segmentation fault: 11  "/Users/mac/Documents/PGD_School/c_projects/"variable_declaration
    */
    printf("This is our number: %d\n", saver);
    printf("testing printing of character %c and decimal %d \n", 'a', 89);
}