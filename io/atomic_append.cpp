#include <iostream>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if(argc < 3) {
        std::cerr << "Invalid arguments!" << std::endl;
        exit(22);
    }
    char *filename = argv[1];
    int len = atoi(argv[2]);
    int fd;
    if(argc == 4 && std::string(argv[3]) == "x") {
        fd = open(filename, O_WRONLY);
        lseek(fd, 0, SEEK_END);
    } else {
        fd = open(filename, O_APPEND | O_WRONLY);
    }
    std::cout << fd << " " << strerror(errno) << std::endl;
    char *buf = (char*)malloc(len);
    memset(buf, 0, len); 
    write(fd, buf, len);
}