#include <iostream>
#include <fcntl.h>

int main(int argc, char *argv[]) {
    if(argc < 3) {
        std::cerr << "Invalid arguments!" << std::endl;
        exit(22);
    }
    char *filename = argv[1];
    int len = atoi(argv[2]);
    int fd = open(filename, O_APPEND | O_WRONLY);
    
}