/* bitwise.c: Illustrates bitwise ops */
#include <stdio.h>

int main() {
    short int n = 0x00a4; /* 0000 0000 1010 0100 */
    short int m = 0x00b7; /* 0000 0000 1011 0111 */
    
    printf("n = 0x00a4 == 0000 0000 1010 0100\n");
    printf("m = 0x00b7 == 0000 0000 1011 0111\n");

    printf("n & m      == 0000 0000 1010 0100 == %04x\n", n & m);
    printf("n | m      == 0000 0000 1011 0111 == %04x\n", n | m);
    printf("n ^ m      == 0000 0000 0001 0011 == %04x\n", n ^ m);
    printf("~n         == 1111 1111 0101 1011 == %04x\n", ~n, "== ");
    printf("~n         == 1111 1111 0101 1011 == %04hx\n", ~n); /*drops high-byte */
    printf("n << 3     == 0000 0101 0010 0000 == %04x\n", n << 3);
    printf("n >> 3     == 0000 0000 0001 0100 == %04x\n", n >> 3);
    return 0;
}