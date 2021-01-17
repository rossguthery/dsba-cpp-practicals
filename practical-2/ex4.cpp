// This program displays "n" lines of Floyd's triangle on the screen.

#include <iostream>
using namespace std;

void triangle (int n) {
    int a = 1, i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "How many lines of Floyd's triangle would you like to see? ";
    cin >> n;
    triangle(n);
    return 0;
}