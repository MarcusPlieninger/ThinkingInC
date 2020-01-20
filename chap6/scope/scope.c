/* scope.c */
#include <stdio.h>

int i = 3;        /* A "global" variable */

int main () {

    int j;
    printf("%d\n",i);

    /* Always have access to a variable defined in an
    an enclosing scope, unless you redefine it. */

    for (j = 0; j < i; ++j) {
        int i = 99; 

    /* Once inside the loop, we re-define another i here, and
    we intialize it with 99. The effect here is that this nested
    declaration of i hides the one defined in the enclosing scope. */

        printf("%d\n",i);

    /* You can put a block anywhere you want. So, here we open a
    free-standing block for another local scope, where we declare
    another i and initialize it with the value of j. */
        {
            int i = j;
            printf("%d\n",i);
        }
    }
}

/* An identifier always refers to the deepest definition, and
if you define an identifier with the same name as one in the
enclosing scope, you hide the one in the enclosing scope. */