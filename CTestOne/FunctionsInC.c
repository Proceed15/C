/*
return_type function_name( parameter list ) {
   body of the function
}
*/


#include <stdio.h>

// function declaration
int max(int num1, int num2, int num3);

int main () {

   // local variable definition
   int a = 11;
   int b = 22;
   int c = 33;
   int ret;

   // calling a function to get max value
   ret = max(a, b, c);

   printf( "Max value is : %d\n", ret );

   return 0;
}

// function returning the max between two numbers
int max(int num1, int num2, int num3) {

   // local variable declaration
   int result;

   if (num1 > num2 && num1 > num3)
      result = num1;
   else if (num2 > num1 && num2 > num3)
      result = num2;
   else
      result = num3;

   return result;
}

/*
#include <stdio.h>
//Call by Value does not change the original argument sent in the called function.
// function declaration
void swap(int x, int y);

int main () {

   // local variable definition
   int a = 100;
   int b = 200;

   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );

   // calling a function to swap the values
   swap(a, b);

   // values are still kept as the same number each
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );

   return 0;
}
void swap(int x, int y) {

   int temp;

   temp = x; // save the value of x
   x = y;    // put y into x
   y = temp; // put temp into y

   return;
}
*/
/*
#include <stdio.h>
//Call by Reference does change the original argument sent in the called function.
int main () {

   // local variable definition
   int a = 100;
   int b = 200;

   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );

   // calling a function to swap the values
   swap(&a, &b);

   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );

   return 0;
}
void swap(int *x, int *y) {

   int temp;

   temp = *x; // save the value of x
   *x = *y;    // put y into x
   *y = temp; // put temp into y

   return;
}
*/
