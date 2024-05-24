#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; /* global variable */

main() {

   while(count--) {
      func();
   }

   return 0;
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);
}

/*

#include <stdio.h>

/* function declaration */
/*
void func(void);

static int count = 1;
static int i = 5;/* global variable */
/*
main() {

    while(count<100){
        count++;
        i++;
        printf("IIIIIIIIIIIIIII is %d and count is %d\n", i, count);
   while(count<10) {
      count++;
      func();
   }
    }
   return 0;
}

/* function definition */
/*
void func( void ) {

    /* local static variable */
    /*
   i++;

   printf("i is %d and count is %d\n", i, count);
}
*/
