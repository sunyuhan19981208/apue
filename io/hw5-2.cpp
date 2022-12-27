#include <fcntl.h>
#include <iostream>
#include <unistd.h>

int main() {
    int fd = open("buf", O_WRONLY | O_APPEND);
    char buf[] = "sunyuhan"; 
    write(fd, buf, sizeof(buf));   
}