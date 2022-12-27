#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <unistd.h>

int main() {
    int fd;
    char temp[] = "/tmp/foo.XXXXXX";
    std::cout << strerror(errno) << std::endl;
    fd = mkstemp(temp);
    std::cout << fd << " " << strerror(errno) << std::endl;
    std::cout << temp << std::endl;
    close(fd);
    sleep(5);
    unlink(temp);
}