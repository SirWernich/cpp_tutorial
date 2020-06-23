#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    std::cout << "Please enter two numbers: \n";
    std::cin >> a >> b;

    c = a + b;

    std::cout << "Addition is " << c << "\n";

    return 0;
}