/* evenodd.c: tracks even and odd numbers inputted */
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int sumevens = 0;
    int sumodds = 0;

    printf("Starting sum of evens is %d\n", sumevens);
    printf("Starting sum of odds is %d\n", sumodds);

    /* Note that "puts" is used only with strings and appends a new line*/
    printf("Please enter the first number: ");
    fflush(stdout);
    scanf("%d", &num1);
    /* easiest way to determine odd or even is with modulo operator */
    (num1 % 2 == 1) ? (sumodds += num1) : (sumevens += num1);
    printf("Sum of evens: %d\n", sumevens);
    printf("Sum of odds: %d\n\n", sumodds);

    printf("Please enter the second number: ");
    fflush(stdout);
    scanf("%d", &num2);
     /* The bitwise AND operator can also be used because the least significant 
    bit determines whether a number is even or odd. 
    
    Bitwise ANDing any even number with 1 will result in 0 which is the Boolean
    value for false in C beecause every even integer has 0 in the least 
    significant bit (i.e., the one's place).
    
    Bitwise ANDing any odd number will yield a non-zero value because every odd
    integer has 1 in the least significant bit (i.e., the one's place).*/
    (num2 & 1) ? (sumodds += num2) : (sumevens += num2);
    printf("Sum of evens: %d\n", sumevens);
    printf("Sum of odds: %d\n\n", sumodds);


    printf("Please enter the third number: ");
    fflush(stdout);
    scanf("%d", &num3);
    num3 & 1 ? (sumodds += num3): (sumevens += num3);
    printf("Sum of evens: %d\n", sumevens);
    printf("Sum of odds: %d\n", sumodds);

    return 0;
}
