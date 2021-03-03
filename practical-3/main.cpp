#include <iostream>
#include <cstdlib>
#include <ctime>

const int max_dim = 50;

void read_int_vector(int a[], int n){
    for (int i = 0; i < n; i++) {
        std::cout << i+1 << ") Number: ";
        std::cin >> a[i];
    }
}

void read_real_vector(double d[], int n){
    for (int i = 0; i < n; i++) {
        std::cout << i+1 << ". Number: ";
        std::cin >> d[i];
    }
}

void random_int_vector(int a[], int n, int m, int M) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (M-m+1) + m;
    }
}

void simpler_random_int_vector(int v[], int s, int M){
    for (int i = 0; i < s; i++) {
        v[i] = rand() % (M + 1);
    }
}

void random_real_vector (double d[], int n, double m, double M) {
    for (int i = 0; i < n; i++) {
        d[i] = m+(M-m+1) * double(rand())/RAND_MAX;
    }
}

void print_int_vector(int a[], int n) {
    std::cout << "The vector is: {";
    for (int i = 0; i < n-1; i++) {
        std::cout << a[i] << ", ";
    };
    std::cout << a[n-1] << "}";
}

void print_real_vector(double d[], int n) {
    std::cout << "The vector is: {";
    for (int i = 0; i < n-1; i++) {
        std::cout << d[i] << ", ";
    };
    std::cout << d[n-1] << "}\n\n";
}

void sum_real_vector(const double a1[], const double a2[], double r[], int n) {
    std::cout << "————— Vector Addition —————\n";
    for (int i = 0; i < n; i++) {
        r[i] = a1[i] + a2[i];
    }
}

void sub_real_vector(const double a1[], const double a2[], double r[], int n) {
    std::cout << "————— Vector Subtraction —————\n";
    for (int i = 0; i < n; i++) {
        r[i] = a1[i] - a2[i];
    }
}

void prod_real_vector(const double a1[], double r[], int n, int x) {
    std::cout << "————— Scalar Multiplication —————\n";
    for (int i = 0; i < n; i++) {
        r[i] = x * a1[i];
    }
}

void scalar_prod_real_vector (const double a1[], const double a2[], double y, int n) {
    std::cout << "————— Scalar Product —————\n";
    for (int i = 0; i < n; i++) {
        y += a1[i] + a2[i];
    }
    std::cout << "The scalar product of these two vectors is: " << y << std::endl;
}

int search_min(int v[], int n, int l, int h) {
    int min = v[l];
    int j = 0;
    if (h > n-1 || l < 0) {
        std::cout << "Invalid search interval. Please try again." << std::endl;
    }
    for (int i = l; i <= h; i++) {
        if (v[i] < min) {
            min = v[i];
            j = i;
        }
    }
    return j;
}

void selection_sort(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        int j = search_min(v, n, i, n-1);
        if (v[j] < v[i]) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    std::cout << "The vector is: {";
    for (int i = 0; i < n-1; i++) {
        std::cout << v[i] << ", ";
    };
    std::cout << v[n-1] << "}";
}

int main() {
    srand(time(0));

    int v1[max_dim];
    int s = 0;

    do {
        std::cout << "Vector dimension? ";
        std::cin >> s;
        if (s > max_dim) {
            std::cout << "The maximal dimension is: " << max_dim << "\n";
        }
    } while (s > max_dim);

    return 0;
}
