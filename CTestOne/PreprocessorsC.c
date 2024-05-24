// https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm --> Keep Learning.

//C - Preprocessors
/*
The C Preprocessor is not a part of the compiler, but is a separate step in the compilation process.
In simple terms, a C Preprocessor is just a text substitution tool and
it instructs the compiler to do required pre-processing before the actual compilation.
We'll refer to the C Preprocessor as CPP.
All preprocessor commands begin with a hash symbol (#).
It must be the first nonblank character, and for readability,
a preprocessor directive should begin in the first column.
The following section lists down all the important preprocessor directives −

Sr.No. 	Directive & Description
1       #define     Substitutes a preprocessor macro.
2       #include    Inserts a particular header from another file.
3       #undef      Undefines a preprocessor macro.
4       #ifdef      Returns true if this macro is defined.
5       #ifndef     Returns true if this macro is not defined.
6       #if         Tests if a compile time condition is true.
7       #else       The alternative for #if.
8       #elif       #else and #if in one statement.
9       #endif      Ends preprocessor conditional.
10      #error      Prints error message on stderr.
11      #pragma     Issues special commands to the compiler, using a standardized method.

Preprocessors Examples
Analyze the following examples to understand various directives.

#define MAX_ARRAY_LENGTH 20

This directive tells the CPP to replace instances of MAX_ARRAY_LENGTH with 20.
Use #define for constants to increase readability.

#include <stdio.h>
#include "myheader.h"

These directives tell the CPP to get stdio.h from System Libraries and add the text to the current source file.
The next line tells CPP to get myheader.h from the local directory and add the content to the current source file.

#undef  FILE_SIZE
#define FILE_SIZE 42

It tells the CPP to undefine existing FILE_SIZE and define it as 42.

#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif

It tells the CPP to define MESSAGE only if MESSAGE isn't already defined.

#ifdef DEBUG
   // Your debugging statements here
#endif

It tells the CPP to process the statements enclosed if DEBUG is defined.
This is useful if you pass the -DDEBUG flag to the gcc compiler at the time of compilation.
This will define DEBUG, so you can turn debugging on and off on the fly during compilation.

Predefined Macros
ANSI C defines a number of macros.
Although each one is available for use in programming, the predefined macros should not be directly modified.

Sr.No. 	Macro & Description
1       __DATE__    The current date as a character literal in "MMM DD YYYY" format.
2       __TIME__    The current time as a character literal in "HH:MM:SS" format.
3       __FILE__    This contains the current filename as a string literal.
4       __LINE__    This contains the current line number as a decimal constant.
5       __STDC__    Defined as 1 when the compiler complies with the ANSI standard.

Let's try the following example −
*/
/*
#include <stdio.h>

int main() {

   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

}
/*
File :C:\Users\JosÚ\Documents\CTestOne\main.c
Date :Jan 19 2024
Time :01:02:03
Line :81
ANSI :1
*/
/**/
/*
When the above code in a file test.c is compiled and executed, it produces (at this time) the following result −

File :test.c
Date :Jun 2 2012
Time :03:36:24
Line :8
ANSI :1

Preprocessor Operators
The C preprocessor offers the following operators to help create macros −
The Macro Continuation (\) Operator
A macro is normally confined to a single line.
The macro continuation operator (\) is used to continue a macro that is too long for a single line.
For example −

#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")

The Stringize (#) Operator

The stringize or number-sign operator ( '#' ), when used within a macro definition,
converts a macro parameter into a string constant.
This operator may be used only in a macro having a specified argument or parameter list.
For example −
*/
/*
#include <stdio.h>

#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")

int main(void) {
   message_for(Carole, Debra);
   return 0;
}
/**/
/*
When the above code is compiled and executed, it produces the following result −

Carole and Debra: We love you!

The Token Pasting (##) Operator
The token-pasting operator (##) within a macro definition combines two arguments.
It permits two separate tokens in the macro definition to be joined into a single token.
For example −
*/
/*
#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)

int main(void) {
   int token34 = 40;
   tokenpaster(34);
   return 0;
}
/**/
/*
When the above code is compiled and executed, it produces the following result −

token34 = 40

It happened so because this example results in the following actual output from the preprocessor −

printf ("token34 = %d", token34);

This example shows the concatenation of token##n into token34 and here we have used both stringize and token-pasting.

The Defined() Operator
The preprocessor defined operator is used in constant expressions to determine if an identifier is defined using #define.
If the specified identifier is defined, the value is true (non-zero).
If the symbol is not defined, the value is false (zero). The defined operator is specified as follows −
*/
/*
#include <stdio.h>

#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main(void) {
   printf("Here is the message: %s\n", MESSAGE);
   return 0;
}
/**/
/*
When the above code is compiled and executed, it produces the following result −

Here is the message: You wish!

Parameterized Macros
One of the powerful functions of the CPP is the ability to simulate functions using parameterized macros.
For example, we might have some code to square a number as follows −

int square(int x) {
   return x * x;
}

We can rewrite above the code using a macro as follows −

#define square(x) ((x) * (x))

Macros with arguments must be defined using the #define directive before they can be used.
The argument list is enclosed in parentheses and must immediately follow the macro name. ]
Spaces are not allowed between the macro name and open parenthesis. For example −
*/
/*
#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(void) {
   printf("Max between 20 and 10 is %d\n", MAX(10, 20));
   return 0;
}
/**/
/*
When the above code is compiled and executed, it produces the following result −

Max between 20 and 10 is 20
*/

//All results may not appear as it depending on the enviroment they've been executed.

//Samples are samples.
