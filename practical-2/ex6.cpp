// This program returns the n-th value of the Fibonacci sequence is a recursive way. It also displays the number of
// recursive calls needed to compute the value.

#include <iostream>
using namespace std;
int counter = 0;

int fibonacci (int x) {
    counter++;
    if (x <= 2)
        return 1;
    else
        return (fibonacci(x-1) + fibonacci(x-2));
}

int main() {
    int  i = 0, n, x;
    cout << "Which value in the Fibonacci sequence would you like? ";
    cin >> n;
    while(i < n) {
        counter = 0;
        x = fibonacci(i);
        i++;
    }
    cout << "Value: " << x << endl;
    cout << "Recursions: " << counter-1 << endl;
    return 0;
}