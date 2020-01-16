/* whileloop.c: Example of while loop */
/* Count fom 1 to 10 */
#include <stdio.h>

int main () {
    int i = 1;
    int n;
    printf("How many times should the do while loop loop?");
    scanf(" %d", &n);
    do
        printf("%d ", i++);
    while (i <= n);
    return 0;
}