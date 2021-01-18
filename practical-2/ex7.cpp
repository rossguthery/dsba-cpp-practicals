// This program takes two integers "a" and "n", where "n" is non-negative, and recursively computes the n-th power of
// "a." It uses two different definitions to do so. Using two global variables, it also displays to the user the
// number of recursive calls needed by each definition to perform said computations.

// For the first definition, the number of recursive calls is always equal to the power "n" plus one. For example, ten
// squared requires three recursive calls. For the second definition, the number of recursive calls exhibits the
// behavior of a step function. That is, for n=1, it requires 3 calls; for n=[2,3], 7; for n=[4,7], 15; and so on and so
// forth. The length of each step increases as "n" increases.

#include <iostream>
using namespace std;
int counter1 = 0;
int counter2 = 0;

int def_one (int a, int n) {
    counter1++;
    if (n == 0)
        return 1;
    else
        return (a*def_one(a, n-1));
}

int def_two (int a, int n) {
    counter2++;
    if (n == 0)
        return 1;
    else if (n%2 == 0)
        return (def_two(a, n/2)*def_two(a, n/2));
    else
        return (a*def_two(a, n/2)*def_two(a, n/2));
}

int main () {
    int a, n;
    cout << "Integer: ";
    cin >> a;
    cout << "Non-negative integer: ";
    cin >> n;
    cout << "————————————————   " << a << " to the power of " << n << "   ————————————————" << endl;
    cout << "First Definition: " << def_one(a, n) << "   Recursive Calls: " << counter1 << endl;
    cout << "Second Definition: " << def_two(a, n) << "   Recursive Calls: " << counter2 << endl;
    return 0;
}


