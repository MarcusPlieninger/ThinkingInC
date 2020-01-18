/* incore.c: Ilustrates sprintf/sscanf */
#include <stdio.h>

int main() {
    int n = 1;
    float x = 2.0;
    char s[] = "hello";
    char string[BUFSIZ];

    sprintf(string, "%d %f j%s", n+1, x+2, s+1);
    puts(string);
    sscanf(string, "%d %f %s", &n, &x, s);
    printf("n == %d, x == %f, s == %s\n", n, x, s);
    return 0; 
}
