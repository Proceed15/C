// https://www.tutorialspoint.com/cprogramming/c_pointers.htm --> Keep Learning.

//C - Pointers
//Pointers in C are easy and fun to learn. Some C programming tasks are performed more easily with pointers,
//and other tasks, such as dynamic memory allocation, cannot be performed without using pointers.
//So it becomes necessary to learn pointers to become a perfect C programmer. Let's start learning them in simple and easy steps.
//As you know, every variable is a memory location and every memory location has its address defined which can be
//accessed using ampersand (&) operator, which denotes an address in memory.
//Consider the following example, which prints the address of the variables defined −
/*
#include <stdio.h>

int main () {

   int  var1;
   char var2[10];

   printf("Address of var1 variable: %x\n", &var1  );
   printf("Address of var2 variable: %x\n", &var2  );

   return 0;
}
*/

/*
A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location.
Like any variable or constant, you must declare a pointer before using it to store any variable address.
The general form of a pointer variable declaration is −

type *var-name;

Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable.
The asterisk * used to declare a pointer is the same asterisk used for multiplication.
However, in this statement the asterisk is being used to designate a variable as a pointer.
Take a look at some of the valid pointer declarations −

int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to a character

The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same,
a long hexadecimal number that represents a memory address. The only difference between pointers of different data types
is the data type of the variable or constant that the pointer points to.
*/

//There are a few important operations, which we will do with the help of pointers very frequently.
//(a) We define a pointer variable,
//(b) assign the address of a variable to a pointer and
//(c) finally access the value at the address available in the pointer variable.
//This is done by using unary operator * that returns the value of the variable located at the address specified by its operand.
//The following example makes use of these operations −
/*
#include <stdio.h>

int main () {

   int  var = 20;   // actual variable declaration
   int  *ip;        // pointer variable declaration

   ip = &var;  // store address of var in pointer variable

   printf("Address of var variable: %x\n", &var  );

   // address stored in pointer variable
   printf("Address stored in ip variable: %x\n", ip );

   // access the value using the pointer
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
/**/

//NULL Pointers
//It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address
//to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer.
//The NULL pointer is a constant with a value of zero defined in several standard libraries. Consider the following program −
/*
#include <stdio.h>

int main () {

   int  *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr  );

   return 0;
}
/**/

//In most of the operating systems, programs are not permitted to access memory at address 0
//because that memory is reserved by the operating system. However, the memory address 0 has special significance;
//it signals that the pointer is not intended to point to an accessible memory location. But by convention,
//if a pointer contains the null (zero) value, it is assumed to point to nothing.
//To check for a null pointer, you can use an 'if' statement as follows −
/*
if(ptr)     // succeeds if p is not null
if(!ptr)    // succeeds if p is null
*/
/*
#include <stdio.h>

int main () {

   int A;
   int *ptr;

   ptr = &A;

   if(ptr){
    printf("The value of ptr is something: %x\n", ptr  );
   }
   else if (!ptr){
    printf("The value of ptr is 0: %x\n", ptr  );
   }

   return 0;
}
/**/

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
