// This program takes two integers "a" and "n", where "n" is non-negative, and recursively computes the n-th power of
// "a." It uses two different definitions to do so. Using two global variables, it also displays to the user the
// number of recursive calls needed by each definition to perform said computations.

// EXPLAIN RELATIONSHIP BETWEEN EXPONENT VALUE AND CALLS.

#include <iostream>
using namespace std;
int counter1 = 0;
int counter2 = 0;

int def_one (int a, int n) {
    counter1 += 1;
    int i = 0;
    if (n == 0)
        return 1;
    else
        while (i < n) {
            a =
        }

        return a*pow(a, n-1);
}

int def_two (int a, int n) {
    counter2 += 1;
    if (n == 0)
        return 1;
    else if (n%2 == 0)
        return pow(a, n/2)*pow(a, n/2);
    else
        return a*(pow(a, n/2)*pow(a, n/2));
}

int main () {
    int a, n;
    cout << "Integer: ";
    cin >> a;
    cout << "Non-Negative Integer: ";
    cin >> n;
    if (n < 0)
        cout << "Please re-enter a non-negative integer: ";
        cin >> n;
    cout << "————————————————   " << a << " to the power of " << n << "   ————————————————" << endl;
    cout << "First Definition: " << def_one(a, n) << "Recursive Calls: " << counter1 << endl;
    cout << "Second Definition: " << def_two(a, n) << "Recursive Calls: " << counter2 << endl;
    return 0;
}

