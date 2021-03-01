#include <iostream>

int main () {

    int x = 0;
    int y = 0;

    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;

    std::cout << "The product of these two integers is " << x*y << std::endl;

}