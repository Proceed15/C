// https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm --> Keep Learning.

//Pointers in Detail
//Pointers have many but easy concepts and they are very important to C programming.
//The following important pointer concepts should be clear to any C programmer −
//Sr.No. 	Concept & Description
//1 	Pointer arithmetic
//There are four arithmetic operators that can be used in pointers: ++, --, +, -
//2 	Array of pointers
//You can define arrays to hold a number of pointers.
//3 	Pointer to pointer
//C allows you to have pointer on a pointer and so on.
//4 	Passing pointers to functions in C
//Passing an argument by reference or by address enable the passed argument to be changed in the calling function by
//the called function.
//5 	Return pointer from functions in C
//C allows a function to return a pointer to the local variable, static variable, and dynamically allocated memory as well.

//C - Pointer to Pointer
//A pointer to a pointer is a form of multiple indirection, or a chain of pointers.
//Normally, a pointer contains the address of a variable.
//When we define a pointer to a pointer, the first pointer contains the address of the second pointer,
//which points to the location that contains the actual value as shown below.
//A variable that is a pointer to a pointer must be declared as such.
//This is done by placing an additional asterisk in front of its name.
//For example, the following declaration declares a pointer to a pointer of type int −
/*
int **var;
*/
//When a target value is indirectly pointed to by a pointer to a pointer,
//accessing that value requires that the asterisk operator be applied twice, as is shown below in the example −
/**/
#include <stdio.h>

int main () {

   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   // take the address of var
   ptr = &var;

   // take the address of ptr using address of operator &
   pptr = &ptr;

   // take the value using pptr
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}
/**/
