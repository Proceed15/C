// https://www.tutorialspoint.com/cprogramming/c_pointer_arithmetic.htm --> Keep Learning.

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

//C - Pointer arithmetic
//A pointer in c is an address, which is a numeric value.
//Therefore, you can perform arithmetic operations on a pointer just as you can on a numeric value.
//There are four arithmetic operators that can be used on pointers: ++, --, +, and -
//To understand pointer arithmetic, let us consider that ptr is an integer pointer which points to the address 1000.
//Assuming 32-bit integers, let us perform the following arithmetic operation on the pointer −
/*
ptr++
*/
//After the above operation, the ptr will point to the location 1004 because each time ptr is incremented,
//it will point to the next integer location which is 4 bytes next to the current location.
//This operation will move the pointer to the next memory location without impacting the actual value at the memory location.
//If ptr points to a character whose address is 1000, then the above operation will point to the location 1001
//because the next character will be available at 1001.

//Incrementing a Pointer
//We prefer using a pointer in our program instead of an array because the variable pointer can be incremented,
//unlike the array name which cannot be incremented because it is a constant pointer.
//The following program increments the variable pointer to access each succeeding element of the array −
/*
#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   // let us have array address in pointer
   ptr = var;

   for ( i = 0; i < MAX; i++) {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      // move to the next location
      ptr++;
   }

   return 0;
}
/**/

//Decrementing a Pointer
//The same considerations apply to decrementing a pointer, which decreases its value by the number of bytes of its data type
//as shown below −

/*
#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   // let us have array address in pointer
   ptr = &var[MAX-1];

   for ( i = MAX; i > 0; i--) {

      printf("Address of var[%d] = %x\n", i-1, ptr );
      printf("Value of var[%d] = %d\n", i-1, *ptr );

      // move to the previous location
      ptr--;
   }

   return 0;
}
/**/

//Pointer Comparisons
//Pointers may be compared by using relational operators, such as ==, <, and >.
//If p1 and p2 point to variables that are related to each other, such as elements of the same array,
//then p1 and p2 can be meaningfully compared.
//The following program modifies the previous example −
//one by incrementing the variable pointer so long as the address to which it points is either less than or equal to
//the address of the last element of the array, which is &var[MAX - 1] −
/*
#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   // let us have address of the first element in pointer
   ptr = var;
   i = 0;

   while ( ptr <= &var[MAX - 1] ) {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      // point to the next location
      ptr++;
      i++;
   }

   return 0;
}
/**/
