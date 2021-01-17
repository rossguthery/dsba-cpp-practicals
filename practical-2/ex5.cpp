// This program returns the n-th value of the Fibonacci sequence is a non-recursive way.

#include <iostream>
using namespace std;

void fibonacci (int n) {
    int a=0, b=1, c, i=0;
    if (n <= 1)
        cout << n;
    else
        while (i < n-2) {
            c = a+b;
            a = b;
            b = c;
            i++;
        }
        cout << c;
}

int main () {
    int n;
    cout << "Which value in the Fibonacci sequence would you like? ";
    cin >> n;
    fibonacci(n);
    return 0;
}