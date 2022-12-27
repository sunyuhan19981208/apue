#include <unistd.h>
#include <iostream>
#include <fcntl.h>

int main() {
    int fd = open("buf", O_RDONLY);
    int fd2 = dup(fd);
    char buf[2];
    read(fd, buf, 2);
    std::cout << buf << std::endl;
    read(fd2, buf, 2);
    std::cout << buf << std::endl;
}