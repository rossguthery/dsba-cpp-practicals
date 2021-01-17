// This program computes the evolution of a moving object's position given a fixed interval of time.

#include <iostream>
using namespace std;

float current_position (float x, float v, float a, float t) {
    float y = x+(v*t)+(a*t*t)/2;
    return y;
}

int main () {
    float a, t=0.0, delta_t, v, x, z;
    int i=0, n;
    cout << "Enter the initial position, the speed, and the acceleration of the object: ";
    cin >> x >> v >> a;
    cout << "How many times do you want to display the position of the moving object? ";
    cin >> n;
    cout << "How often (in seconds) do you want to update the position of the moving object? ";
    cin >> delta_t;
    cout << "——————————————————————————————————" << endl;
    {
        cout << "Acceleration: " << a << "  Initial Speed: " << v << "  Initial Position: " << x <<
        "   Number of Observations: "<< n << "  Time Delta: " << delta_t << endl;
    }
    cout << "——————————————————————————————————" << endl;
    while (i < n) {
        z = current_position(x, v, a, t);
        cout << "At time " << t << ", the moving object's position is " << z << "." << endl;
        t = t+delta_t;
        i++;
    }
    return 0;
}