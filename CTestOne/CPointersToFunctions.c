// https://www.tutorialspoint.com/cprogramming/c_passing_pointers_to_functions.htm --> Keep Learning.

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

//Passing pointers to functions in C
//C programming allows passing a pointer to a function.
//To do so, simply declare the function parameter as a pointer type.
//Following is a simple example where we pass an unsigned long pointer to a function and
//change the value inside the function which reflects back in the calling function −
/*
#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

int main () {

   unsigned long sec;
   getSeconds( &sec );

   /// print the actual value
   printf("Number of seconds: %ld\n", sec );

   return 0;
}

void getSeconds(unsigned long *par) {
   // get the current number of seconds
   *par = time( NULL );
   return;
}
/**/

//The function, which can accept a pointer, can also accept an array as shown in the following example −
/*
#include <stdio.h>

// function declaration
double getAverage(int *arr, int size);

int main () {

   // an int array with 5 elements
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument
   avg = getAverage( balance, 5 ) ;

   // output the returned value
   printf("Average value is: %f\n", avg );
   return 0;
}

double getAverage(int *arr, int size) {

   int  i, sum = 0;
   double avg;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = (double)sum / size;
   return avg;
}
/**/
