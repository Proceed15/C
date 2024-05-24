#include <stdio.h>

/*First create an main.c file in the
same directory with this:

#include <stdio.h>
#include "support.c"

int count ;
extern void write_extern();

main() {
   count = 5;
   write_extern();
}

*/
extern int count;

void write_extern(void) {
   printf("count is %d\n", count);
}

//The response shall be count is 5 |.
