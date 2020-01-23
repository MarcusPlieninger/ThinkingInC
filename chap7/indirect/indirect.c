/* indirect.c: Illustrates indirection */
#include <stdio.h>

int main() {
    int i = 7;
    int* ip = &i;

    printf("Address %p contains %d\n", ip, *ip);
    *ip = 8;
    printf("Now addess %p contains %d\n", ip, *ip);
    return 0;
}