/* round.c: round inputted real number to nearest integer*/
#include <stdio.h>
int main() {
    float flinput;
    int intoutput;

    puts("Please enter a real number: ");
    fflush(stdout); /* cursor prompt goes on same line as result*/
    scanf("%f", &flinput);
    intoutput = (int)(flinput + .5);
    return 0;

/* print original float and rounded integer */
    printf("%f rounded is %d\n", flinput, intoutput);
}