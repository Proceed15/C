// https://www.tutorialspoint.com/cprogramming/c_arrays.htm --> Keep Learning.

//Arrays in Detail
//Arrays are important to C and should need a lot more attention.
//The following important concepts related to array should be clear to a C programmer −
//Multi-dimensional arrays
//Passing arrays to functions
//Return array from a function
//Pointer to an array

//Multi-dimensional arrays
//C supports multidimensional arrays.
//The simplest form of the multidimensional array is the two-dimensional array.
/*
#include <stdio.h>

int main () {

   // an array with 5 rows and 2 columns
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;

   // output each array element's value
   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }

   return 0;
}
*/

//Passing arrays to functions
//You can pass to the function a pointer to an array by specifying the array's name without an index.
/*
Way-1

Formal parameters as a pointer −

void myFunction(int *param) {
   .
   .
   .
}

Way-2

Formal parameters as a sized array −

void myFunction(int param[10]) {
   .
   .
   .
}

Way-3

Formal parameters as an unsized array −

void myFunction(int param[]) {
   .
   .
   .
}

Example

Now, consider the following function, which takes an array as an argument along with another argument and
based on the passed arguments, it returns the average of the numbers passed through the array as follows −
Create an new file with it as "ArrayGetAverageC.c" /.

double getAverage(int arr[], int size) {

   int i;
   double avg;
   double sum = 0;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }

   avg = sum / size;

   return avg;
}
/*
#include <stdio.h>
#include "ArrayGetAverageC.c"

// function declaration
double getAverage(int arr[], int size);

int main () {

   // an int array with 5 elements
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument
   avg = getAverage( balance, 5 ) ;

   // output the returned value
   printf( "Average value is: %f ", avg );

   return 0;
}
*/

// 	Return array from a function
//C allows a function to return an array.
/*
C programming does not allow to return an entire array as an argument to a function.
However, you can return a pointer to an array by specifying the array's name without an index.
If you want to return a single-dimension array from a function, you would have to declare a function returning a pointer
as in the following example −

int * myFunction() {
   .
   .
   .
}

Second point to remember is that C does not advocate to return the address of a local variable to outside of the function,
so you would have to define the local variable as static variable.
*/
/*
#include <stdio.h>

// function to generate and return random numbers
int * getRandom( ) {

   static int  r[10];
   int i;

   // set the seed
   srand( (unsigned)time( NULL ) );

   for ( i = 0; i < 10; ++i) {
      r[i] = rand();
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

// main function to call above defined function
int main () {

   // a pointer to an int
   int *p;
   int i;

   p = getRandom();

   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
//It will generate 9 different random numbers and repeat those 9 numbers one time resulting in a total of 18 numbers
*/

//Pointer to an array
//You can generate a pointer to the first element of an array by simply specifying the array name, without any index.
/*
Assuming you have some understanding of pointers in C, let us start:
An array name is a constant pointer to the first element of the array. Therefore, in the declaration −

double balance[50];

balance is a pointer to &balance[0], which is the address of the first element of the array balance.
Thus, the following program fragment assigns p as the address of the first element of balance −

double *p;
double balance[10];

p = balance;

It is legal to use array names as constant pointers, and vice versa.
Therefore, *(balance + 4) is a legitimate way of accessing the data at balance[4].
Once you store the address of the first element in 'p',
you can access the array elements using *p, *(p+1), *(p+2) and so on. Given below is the example to
show all the concepts discussed above −
*/
/*
#include <stdio.h>

int main () {

   // an array with 5 elements
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;

   p = balance;

   // output each array element's value
   printf( "Array values using pointer\n");

   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %f\n",  i, *(p + i) );
   }

   printf( "Array values using balance as address\n");

   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %f\n",  i, *(balance + i) );
   }

   return 0;
}
*/
//In the above example, p is a pointer to double, which means it can store the address of a variable of double type.
//Once we have the address in p, *p will give us the value available at the address stored in p,
//as we have shown in the above example.
