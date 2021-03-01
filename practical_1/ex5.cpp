#include <iostream>

int main () {

    int x = 0;
    long long int factorial = 1;

    std::cout << "Enter an integer: ";
    std::cin >> x;

    for (int i = 1; i <= x; i++) {
        factorial *= i;
    }

    std::cout << "The factorial of " << x << " is " << factorial << std::endl;

}