// The functions below are capable of reading, printing, evaluating, adding, and multiplying any two polynomials of a
// given arbitrary degree.

#include <iostream>
using namespace std;

double * read_poly(int &n) {
    cout << "Degree of Polynomial: ";
    cin >> n;
    double *c = new double[n+1];
    for (int i = 0; i <= n; i++) {
        cout << "Coefficient of Degree " << i << ": ";
        cin >> c[i];
    }
    return c;
}

void print_poly(double *c, int n) {
    int i;
    cout << c[0];
    if (n > 0)
        cout << " + ";
    for (i = 1; i < n; i++)
        cout << c[i] << "*x^" << i << " + ";
    if (n > 0)
        cout << c[n] << "*x^" << i;
    cout << endl;
}

void eval_poly(double *c, int n) {
    int i;                                               // Declare counter for the for loop.
    double x, sum = 0;                                   // Declare and/or define evaluation value and sum variable.
    cout << "Value to Evaluate: ";                       // Prompt user to provide evaluation value.
    cin >> x;                                            // Read in user input and assign to x.
    for (i = 0; i <= n; i++)                             // Define for loop.
        sum += c[i] * pow(x, i);                         // Add each evaluated term of the polynomial to sum variable.
    cout << "The value of the polynomial at x = " << x << " is " << sum << "." << endl;  // Print final sum on screen.
}

void add_polys(double *p1, int n1, double *p2, int n2) {
    int i, j, smaller, larger;                           // Declare two counters and two variables.
    if (n2 > n1) {                                       // Check which polynomial degree is larger. Assign smaller
        smaller = n1;                                    // degree to "smaller" and larger to "larger."
        larger = n2;
    }
    else {
        smaller = n2;
        larger = n1;
    }
    double *c = new double[larger+1];                    // Define new array to hold summed coefficient values.
    for (i = 0; i <= smaller; i++)                       // Define for loop that adds the coefficients of each
        c[i] = p1[i] + p2[i];                            // polynomial until the smaller degree is reached.
    if (larger == n1) {                                  // Check which degree is the larger one.
        for (j = i; j <= larger; j++)                    // Declare for loop. Start where first for loop ended.
            c[j] = p1[j];                                // Complete "sums" arrays with the appropriate coefficients.
    }
    else                                                 // Repeat preceding steps if other case applies.
        for (j = i; j <= larger; j++)
            c[j] = p2[j];
    print_poly(c, larger);                               // Call a function to print summed polynomial to the screen.
}

void mult_polys(double *p1, int n1, double *p2, int n2) {
    int j, size = n1+n2;
    double *c = new double[size];                        // Define new array to hold multiplied coefficient values.
    for (int i = 0; i < (n1+n2-1); i++)                  // Initialize the product polynomial.
        c[i] = 0;
    for (int i = 0; i <= n1; i++) {                      // Take every term of first polynomial.
        for (j = 0; j <= n2; j++)                        // Multiply the current term of first polynomial with every
            c[i+j] += p1[i] * p2[j];                     // term of second polynomial.
    }
    print_poly(c, size);
}

int main() {
    double *p1;
    double *p2;                                          // Declare a second polynomial.
    int g1;
    int g2;                                              // Declare a second degree.

    cout << "———— First Polynomial ———— " << endl;
    p1 = read_poly(g1);
    print_poly(p1, g1);
    cout << "———— Second Polynomial ———— " << endl;
    p2 = read_poly(g2);
    print_poly(p2, g2);
    cout << "———— Evaluates Polynomial 1 ———— " << endl;
    eval_poly(p1, g1);                                   // Evaluate first polynomial at user-provided value.
    cout << "———— Sums Polynomials ———— " << endl;
    add_polys(p1, g1, p2, g2);                           // Add two polynomials together.
    cout << "———— Multiply Polynomials ———— " << endl;
    mult_polys(p1, g1, p2, g2);                          // Multiply two polynomials together.

    delete[] p1;
    delete[] p2;
    return 0;
}