#include <unistd.h>
#include <iostream>

int main() {
    // close(2);
    // int newfd = dup(1);
    dup2(1, 2); // the same as two lines below
    std::cerr << "This is sunyuhan" << std::endl;
}