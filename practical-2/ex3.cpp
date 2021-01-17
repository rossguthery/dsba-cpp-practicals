// This program takes two integers and swaps their values.

#include <iostream>
using namespace std;

void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int a, b;
    cout << "First Integer: ";
    cin >> a;
    cout << "Second Integer: ";
    cin >> b;
    swap(&a, &b);
    cout << "The first integer is now " << a << ", and the second is now " << b << "." << endl;
    return 0;
}