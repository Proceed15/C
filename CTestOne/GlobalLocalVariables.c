// https://www.tutorialspoint.com/cprogramming/c_scope_rules.htm --> Keep Learning.

/**/
#include <stdio.h>

// global variable declaration
int g;

int main () {

  // local variable declaration
  int a, b;

  // actual initialization
  a = 10;
  b = 20;
  g = a + b;

  printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
  return 0;
}
/**/
/*
#include <stdio.h>

// global variable declaration
int g = 20;

int main () {

  // local variable declaration --> Takes preference (precedence) as the value of the variable
  int g = 10;

  printf ("value of g = %d\n",  g);

  return 0;
}
*/
/*
#include <stdio.h>

// global variable declaration
int a = 20;

int main () {

  // local variable declaration in main function
  int a = 10;
  int b = 20;
  int c = 0;

  printf ("value of a in main() = %d\n",  a);
  c = sum( a, b);
  printf ("value of c in main() = %d\n",  c);

  return 0;
}

// function to add two integers --> Takes preference (precedence) of the value of the local variable
// over the global variable being declared.
int sum(int a, int b) {

   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);

   return a + b;
}
*/
