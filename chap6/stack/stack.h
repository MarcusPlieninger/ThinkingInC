/* stack.h: Decelarations for a stacck if ints */

#define STK_ERROR -32767

void stk_push(int);
void stk_pop(void);
int stk_top(void);
int stk_size(void);
int stk_error(void);