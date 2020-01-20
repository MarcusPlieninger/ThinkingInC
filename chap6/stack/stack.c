/* stack.c: implementation */
#include "stack.h"

/* Private data: */
#define MAX 10          /* stack limit */
static int error = 0;   /* error flag */
static int data[MAX];   /* the stack */
static int ptr;         /* stack pointer */

/* Function implementation */
void stk_push(int x) {
    if (ptr < MAX) {
        data[ptr++] = x;
        error = 0;
    }
    else
        error = 1;
}
