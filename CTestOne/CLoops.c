//#include <stdio.h>
/*
int main () {

   // local variable definition
   int a = 10;

   // while loop execution
   while( a < 20 ) {
      printf("value of a: %d\n", a);
      a++;
   }

   return 0;
}
*/
/*
The syntax of a for loop in C programming language is −

for ( init; condition; increment ) {
   statement(s);
}

Here is the flow of control in a 'for' loop −
    The init step is executed first, and only once. This step allows you to declare and initialize any loop control variables.
    You are not required to put a statement here, as long as a semicolon appears.
    Next, the condition is evaluated. If it is true, the body of the loop is executed. If it is false,
    the body of the loop does not execute and the flow of control jumps to the next statement just after the 'for' loop.
    After the body of the 'for' loop executes, the flow of control jumps back up to the increment statement.
    This statement allows you to update any loop control variables. This statement can be left blank, as long as a semicolon
    appears after the condition.
    The condition is now evaluated again. If it is true, the loop executes and the
    process repeats itself (body of loop, then increment step, and then again condition).
    After the condition becomes false, the 'for' loop terminates.
*/
/*
int main () {

   int a;

   // for loop execution
   for( a = 10; a < 40; a = a + 1 ){
      printf("value of a: %d\n", a);
   }

   return 0;
}
*/
/*
int main () {

   // local variable definition
   int a = 10;

   // do loop execution
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );

   return 0;
}
*/
/*
int main () {

   //local variable definition
   int i, j;

   for(i = 2; i<100; i++) {

      for(j = 2; j <= (i/j); j++)
      if(!(i%j)) break; // if factor found, not prime
      if(j > (i/j)) printf("%d is prime\n", i);
   }

   return 0;
}
*/
// https://www.tutorialspoint.com/cprogramming/c_operators.htm --> Keep Learning.
/*
#include <stdio.h>
int main () {

   //local variable definition
   int i, j;

   for(i = 2; i<114; i++) {

      for(j = 2; j <= (i/j); j++)
      if(!(i%j)) break; // if factor found, not prime
      if(j > (i/j)) printf("%d is prime\n", i);
   }

   return 0;
}
*/
