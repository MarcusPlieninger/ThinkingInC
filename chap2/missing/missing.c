/* missing.c */
#include <stdio.h>
#include <limits.h>

int main () {
    float x = ULONG_MAX; /* 4,294,967,295 */
    double y = ULONG_MAX;
    long double z = ULONG_MAX;
    printf("%f\n%f\n%Lf\n", x, y, z);
    return 0;
}

/* Output
 * 4294967296.000000
 * 4294967295.000000
 * 0.000000 ???
 */