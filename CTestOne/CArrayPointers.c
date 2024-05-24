// https://www.tutorialspoint.com/cprogramming/c_array_of_pointers.htm --> Keep Learning.

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

//C - Array of pointers
//Before we understand the concept of arrays of pointers,
//let us consider the following example, which uses an array of 3 integers −
/*
#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int i;

   for (i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, var[i] );
   }

   return 0;
}
/**/

//There may be a situation when we want to maintain an array,
//which can store pointers to an int or char or any other data type available.
//Following is the declaration of an array of pointers to an integer −
/*
int *ptr[MAX];
*/
//It declares ptr as an array of MAX integer pointers.
//Thus, each element in ptr, holds a pointer to an int value.
//The following example uses three integers, which are stored in an array of pointers, as follows −
/*
#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];

   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; // assign the address of integer.
   }

   for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
   }

   return 0;
}
/**/

//You can also use an array of pointers to character to store a list of strings as follows −
/*
#include <stdio.h>

const int MAX = 4;

int main () {

   char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };

   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }

   return 0;
}
/**/
