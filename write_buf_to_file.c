#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <types.h>

int main(int argc, char *argv[]) {
    int fd,bytes=8192;
    char *ptr,*ref;
        printf("Allocating %d bytes\n",bytes);
        ptr=malloc(bytes);
        printf("The address of your memory is %p\n",ptr);
        for (ref=ptr;ref < (ptr+bytes);ref++) {
            /*char is single quote, string is double quote*/
            *ref='N';
    }
    fd=open("mybuff.dat",O_CREAT);
    write(fd,ptr);
    printf("Hit <return> to exit\n");
    getchar();
    printf("\n");
}
