/* branch.c: Illustrates branching */
/* Finds first odd numer whose digits
   add to 7. Assumes 2 digits only.*/

#include <stdio.h>
#define SIZE 5

int main() {
    int nums[SIZE] = {10, 21, 32, 43, 54};
    int i;
    for (i = 0; i < SIZE; ++i) {
        int dig1, dig2;
        if (nums[i]%2 == 0)
            continue;    /* skip evens */
        dig2 = nums[i]%10;
        dig1 = nums[i]/10;
        if (dig1 + dig2 == 7) {
            printf("found %d\n", nums[i]); /* 43 */
            break;
        }
    }
    return 0;
}
