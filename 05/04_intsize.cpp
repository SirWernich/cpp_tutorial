#include <iostream>

int main() {
    int i = 10;
    long l = 10;
    
    int size_i = sizeof(i);
    int size_l = sizeof(l);

    std::cout << "Size int: " << size_i << std::endl;
    std::cout << "Size long: " << size_l << std::endl;

    return 0;
}