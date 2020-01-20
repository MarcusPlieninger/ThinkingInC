/* fun3.c: Illustrates a function prototype */
#include <stdio.h>

float avg(int, int);    /* Prototype */

int main () {
    int x, y;

    puts("Enter the first number:");
    scanf("%d", &x);
    puts("Enter the second number:");
    scanf("%d", &y);
    printf("The average is %.2f\n", avg(x,y));
    return 0;
}

float avg(int n, int m) {
    return (n + m) / 2.0;
}

/* 

How a function prototype would be used

file mystuff.h
    This would be the header file.
    The header file would contain prototypes, e.g.:
        float avg(int, int);

file mystuff.c
    This would be the implementation file. 
    This would have the actual body, the complete function definition:
        float avg(int n, int m) {
            return (n + m) / 2.0;
    mystuff.c would also include mystuff.h

3rd file would be the application:

file fun3.c
    The application that uses the "mystuff" module, as it were:

    #include <sdtdio.h>
    #include "mystuff.h"

    int main () {
        ...
        ...
        ... avg(x, y) ...
        ...
        return 0;
    }

    Make sure to link with compiled version of mystuff.c when you
    build the program.
*/

