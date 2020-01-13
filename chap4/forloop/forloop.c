/* whileloop.c: Example of while loop */
/* Count fom 1 to 10 */
#include <stdio.h>

int main () {
    int n;
    printf("How many times should the while loop loop?");
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
        printf ("%d ", i);
    return 0;
}