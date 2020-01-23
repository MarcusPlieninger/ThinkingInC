/* lab6.c 
test program */

#include "employee.h"
#include <stdio.h>

int main () {
    int i;

    /* Fill employee array: */
    while (addEmployee() != -1)

    /* Print each Employee: */
    for (i = 0; i < numEmployees(); ++1) {
        printEmployee(i);
        putchar('\n');
    }
    return 0;
}