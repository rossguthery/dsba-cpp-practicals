// "You are required to write a number of C++ functions that are capable of treating any degree of polynomial and
// therefore must use dynamic memory allocation and deallocation. So you have to use 'new' and 'delete.'"

#include <iostream>
using namespace std;

double * read_poly(int &n) {
    cout << "Degree of Polynomial: ";
    cin >> n;
    double * c=new double[n+1];
    for (int i=0; i<=n; i++) {
        cout << "Coefficient of Degree " << i << ": ";
        cin >> c[i];
    }
    return c;
}

void print_poly(double *c, int n) {
    int i;
    cout << c[0];
    if (n>0)
        cout << " + ";
    for (i=1; i<n; i++)
        cout << c[i] << "*x^" << i << " + ";
    if (n>0)
        cout << c[n] << "*x^" << i;
    cout << endl;
}

void eval_poly(double *c, int n) {
    int j;                                               // Declare counter for the for loop.
    double x, sum=0;                                     // Declare and/or define evaluation value and sum variable.
    cout << "Value to Evaluate: ";                       // Prompts user to provide evaluation value.
    cin >> x;                                            // Reads in user input to x.
    for (j=0; j<=n; j++)                                 // Defines for loop.
        sum += c[j]*pow(x, j);                           // Adds each evaluated term of the polynomial to sum variable.
    cout << "The value of the polynomial at x=" << x << " is " << sum << "." ;  // Prints final sum value on screen.
}

int main() {
    double *p1;
    int g1;

    p1=read_poly(g1);
    print_poly(p1, g1);
    eval_poly(p1, g1);

    delete[] p1;
    return 0;
}