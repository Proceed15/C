// https://www.tutorialspoint.com/cprogramming/c_unions.htm --> Keep Learning.

//C Unions
//A union is a special data type available in C that allows to store different data types in the same memory location.
//You can define a union with many members, but only one member can contain a value at any given time.
//Unions provide an efficient way of using the same memory location for multiple-purpose.
/*
union [union tag] {
   member definition;
   member definition;
   ...
   member definition;
} [one or more union variables];
*/
//Examples:
/*
union Data {
   int i;
   float f;
   char str[20];
} data;
*/
/*
#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}*/

//Accessing Union Members
//To access any member of a union, we use the member access operator (.). The member access operator is coded as a period
//between the union variable name and the union member that we wish to access.
//You would use the keyword union to define variables of union type.
//The following example shows how to use unions in a program −
/*
#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;

   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);

   return 0;
}
/**/
/*
When the above code is compiled and executed, it produces the following result −
data.i : 1917853763
data.f : 4122360580327794860452759994368.000000
data.str : C Programming
*/
//Here, we can see that the values of i and f members of union got corrupted because
//the final value assigned to the variable has occupied the memory location and this is
//the reason that the value of str member is getting printed very well.
//Now let's look into the same example once again where we will use one variable at a time which
//is the main purpose of having unions −
/**/
#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;

   data.i = 10;
   printf( "data.i : %d\n", data.i);

   data.f = 220.5;
   printf( "data.f : %f\n", data.f);

   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   return 0;
}
/**/
/*
When the above code is compiled and executed, it produces the following result −
data.i : 10
data.f : 220.500000
data.str : C Programming
*/
//Here, all the members are getting printed very well because one member is being used at a time.
