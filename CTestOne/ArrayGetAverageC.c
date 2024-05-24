/*
//First create an main.c file in the
//same directory with this:
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

//#include <stdio.h> --> Necessário somente no arquivo main.c /.

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

//The response shall be like this: Average value is: 214.400000 /.
