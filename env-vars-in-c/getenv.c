# include <stdio.h>
# include <stdlib.h>

/* 
The intent here is that the variable MYINT will be defined in an
environment variable. If it is not defined, the program will return -1.
the convention "MYINT=5 ./getenv" will set the environment variable MYINT to 5
*/

int main() {
    char *myint = getenv("MYINT");
    int thisint;
    if (myint == NULL) {
        return -1;
    } else {
        thisint=atoi(myint);
        printf("The value of MYINT is %d\n", thisint);
    }
}