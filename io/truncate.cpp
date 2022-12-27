#include <unistd.h>
#include <fcntl.h>

int main() {
    // truncate("buf", 4);
    int fd = open("buf", O_WRONLY);
    ftruncate(fd, 4);
}