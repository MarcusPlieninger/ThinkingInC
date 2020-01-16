/* branch2.c: Branching on arbitrary input */
/* Finds first odd numer whose digits
   add to 7. Assumes 2 digits only.*/

#include <stdio.h>

int main() {
    int num;
    int i;

    puts("I will find the first odd number whose digits add to 7!");

    do {
        int dig1, dig2;

        printf("Enter a number: ");
        fflush(stdout);
        scanf("%d", &num);

        if (num%2 == 0)
            continue;

        dig2 = num%10;
        dig1 = num/10;
        if (dig1 + dig2 == 7) {
            printf("found %d\n", num);
            break;
        }
    }
    while (num != 0);
    
    return 0;
}