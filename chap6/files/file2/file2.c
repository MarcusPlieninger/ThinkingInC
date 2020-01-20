/* file2.c */
#include <stdio.h>

int main() {
    extern int i;
    /* extern optional for functions: */
    int get_j (void);

    printf("i == %d\n", ++i);       /* i == 11 */
    printf("j == %d\n", get_j());   /* j == 20 */
    return 0;
}

/* i is declard as an extern int. The keyword "extern" means "something is 
defined elsewere, go find it." Basically it's defined at file scope somewhere. 
So, this i will become linked to the i in file1.c. It is a reference to a
variable defined elswere.

If you would try to do the same thing with j, you would get a link error, an
"unresolved external reference," because that j in file1 is not visible outside
its file, so there's no way to link to it.

For that reason, we have a function called get_j which allows us just to
retrieve its value.

We are protecting j in file1 from any change from another file. We only allow
it to be viewed by giving it a function to get it. Direct access, however, is
denied.

In file2, get_j does not include the extern keyword. The extern keyword is
optional for functions (a convience because functions are used so often.)

But, for data variables, if you want to link up with global variables defined
in another file, you have to use the extern keyword as done above. */