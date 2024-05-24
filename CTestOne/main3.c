#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c, j;
extern float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;

   /* actual initialization */
   a = 13;
   b = 20;

   printf("values \n");
   c = a + b;
   printf("value of c : %d \n", c);

   f = 72.0/3.0;
   printf("value of f : %f \n", f);

   // function call
   int i = func();
}

// function definition
int func() {
   int j = 24;
   printf("value of J : %d \n", j);
   return 0;
}
