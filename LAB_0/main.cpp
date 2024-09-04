#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;
    int x;
    std::cin >> x;

    if (x == 0) {
        std::cout << "Error, division by zero!";
    } else {
        std::cout << 10 / x;
    }
}
