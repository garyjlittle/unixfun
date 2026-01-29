#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

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
    printf("\n");
    fd=open("mybuff.dat",O_RDWR|O_CREAT,S_IRWXU);
    write(fd,ptr,bytes);
}
