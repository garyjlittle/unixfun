#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int bytes;
    char *ptr,*ref,*fail;
    if (argc == 2) {
        printf("Allocating %s KB\n", argv[1]);
        bytes=(atoi(argv[1])*1024);
        printf("Allocating %d bytes\n",bytes);
    } else {
        printf("Please supply KB to allocate\n");
        exit(1);
    }
    if (bytes>0) {
        ptr=malloc(bytes);
        printf("The address of your memory is %p\n",ptr);
        for (ref=ptr;ref < (ptr+bytes);ref++) {
            /*char is single quote, string is double quote*/
            *ref='N';
    	}
    
    }else{
        printf("No memory allocated\n");
    }
    printf("Hit <return> to exit\n");
    getchar();
    printf("\n");
        /* Deliberately write to un-initialised offset */
	fail=0;
        printf("The address of your memory fail is %p\n",fail);
        *fail='N';
}
