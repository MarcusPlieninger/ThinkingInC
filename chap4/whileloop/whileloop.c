/* whileloop.c: Example of while loop */
/* Count fom 1 to 10 */
#include <stdio.h>

int main () {
    int i = 1;
    int n;
    printf("How many times should the do while loop loop?");
    scanf(" %d", &n);
    while (i <= n) {
        printf("%d ", i);
        i += 1;

    /*
    A shorter version
    
    int i = 1;
    while (i <= 10)
        printf("%d ", i++)
    
    */    
    }
    return 0;
}