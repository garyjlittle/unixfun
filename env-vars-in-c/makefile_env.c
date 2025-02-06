#include <stdio.h>
#include <stdlib.h>

#ifndef MYINT
#define MYINT 0
#endif

/*  
The intent here is that the variable MYINT will be defined in the makefile
and passed to the compiler as a preprocessor definition. If it is not defined,
the default value of 0 will be used. 
*/

int main() {
    int thisint = MYINT;
    printf("The value of MYINT is %d\n", thisint);
    return 0;
}