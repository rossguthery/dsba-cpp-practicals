#include <iostream>

int main () {

    int x = 0;

    std::cout << "Enter an integer: ";
    std::cin >> x;

    for (int i = 0; i < x; i++) {
        std::cout << "*";
    }

}