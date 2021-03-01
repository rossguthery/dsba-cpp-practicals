#include<iostream>

int main(){

    double min;
    double max;
    double x = 0;

    for (int i = 0; i < 10; i++) {

        std::cout << "Enter a real number: ";
        std::cin >> x;

        if (i == 0) {
            min = x;
            max = x;
        }

        if (x < min) {
            min = x;
        }

        if (x > max) {
            max = x;
        }

    }

    std::cout << "The smallest number you entered is: " << min << std::endl;
    std::cout << "The largest number you entered is: " << max <<  std::endl;

}