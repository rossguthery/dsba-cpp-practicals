#include<iostream>
#include<cmath>

double pi_approx_n (int n) {

    double pi = 0.0;

    for (int j = 0; j <= n; j++) {

        pi += pow(-1,j)*4/(2*j+1);

    }

    return pi;

}

int main() {

    int n = 0;
    double pi;

    std::cout << "Enter the number of iterations you desire for your approximation: ";
    std::cin >> n;

    pi = pi_approx_n(n);

    std::cout << "The approximation of pi in this case is: " << pi << std::endl;

}