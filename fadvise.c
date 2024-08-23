#define _GNU_SOURCE

#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int main() {
    int fd;
    fd=open("testfile",O_RDONLY);
    posix_fadvise(fd,0,0,POSIX_FADV_SEQUENTIAL);	
    char buffer[8192];
    
    /* Read the file sequentially */
    while ((read(fd, buffer, sizeof(buffer) )) > 0) {
	printf("");
    }

}
