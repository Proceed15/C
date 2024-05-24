#include <stdio.h>

/*
int main () {

   // local variable definition
   int a = 10;

   // check the boolean condition using if statement

   if( a < 20 ) {
      // if condition is true then print the following
      printf("a is less than 20\n" );
   }

   printf("value of a is : %d\n", a);

   return 0;
}*/

//#include <stdio.h>
/*
int main () {

   //local variable definition
   int a = 100;

   //check the boolean condition
   if( a < 20 ) {
      //if condition is true then print the following
      printf("a is less than 20\n" );
   } else {
      //if condition is false then print the following
      printf("a is not less than 20\n" );
   }

   printf("value of a is : %d\n", a);

   return 0;
}
*/

/*
int main () {

   //local variable definition
   int a = 1000;

   // check the boolean condition
   if( a == 10 ) {
      //if condition is true then print the following
      printf("Value of a is 10\n" );
   } else if( a == 20 ) {
      //if else if condition is true
      printf("Value of a is 20\n" );
   } else if( a == 30 ) {
      //if else if condition is true
      printf("Value of a is 30\n" );
   } else {
      //if none of the conditions is true
      printf("None of the values is matching\n" );
   }

   printf("Exact value of a is: %d\n", a );

   return 0;
}
*/

/*
int main () {

   //local variable definition
   int a = 100;
   int b = 200;

   //check the boolean condition
   if( a == 100 ) {

      //if condition is true then check the following
      if( b == 200 ) {
         //if condition is true then print the following
         printf("Value of a is 100 and b is 200\n" );
      }
   }

   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );

   return 0;
}
*/

/*
int main () {

   //local variable definition
   int a = 100;
   int b = 200;

   //check the boolean condition
   if( a == 100 ) {
      if( b == 100 ) {
        printf("Value of b is 100\n" );
      }
      //if condition is true then check the following
      else if( b == 200 ) {
         //if condition is true then print the following
         printf("Value of a is 100 and b is 200\n" );
      }
   }

   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );

   return 0;
}
*/

/*
switch(expression) {

   case constant-expression  :
      statement(s);
      break; // optional

   case constant-expression  :
      statement(s);
      break; // optional

   // you can have any number of case statements
   default : // Optional
   statement(s);
}
*/

/*
#include <stdio.h>

int main () {

   // local variable definition
   char grade = 'A';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }

   printf("Your grade is  %c\n", grade );

   return 0;
}
*/

/*
switch(ch1) {

   case 'A':
      printf("This A is part of outer switch" );

      switch(ch2) {
         case 'A':
            printf("This A is part of inner switch" );
            break;
         case 'B': // case code
      }

      break;
   case 'B': // case code
}
*/

/*
#include <stdio.h>

int main () {

   // local variable definition
   int a = 100;
   int b = 200;

   switch(a) {

      case 100:
         printf("This is part of outer switch\n", a );

         switch(b) {
            case 200:
               printf("This is part of inner switch\n", a );
         }
   }

   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );

   return 0;
}
*/
