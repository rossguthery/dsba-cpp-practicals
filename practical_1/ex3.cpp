#include <iostream>

int main () {

    int x = 0;
    int y = 0;

    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;

    if (x % y == 0) {
        std::cout << x << " is a multiple of " << y << std::endl;
    }
    else {
        std::cout << x << " is not a multiple of " << y << std::endl;
    }

}