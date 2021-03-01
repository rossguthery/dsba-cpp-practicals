#include <iostream>

int main () {

    int x = 0;

    std::cout << "Enter an integer: ";
    std::cin >> x;

    for (int i = 0; i < x; i++) {

        for (int j = 0; j <= i; j++) {

            std::cout << "*";

        }

        std::cout << "\n";

    }

}