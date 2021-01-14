// This program establishes whether a point in the cartesian plane, defined by its x and y coordinates, is inside
// a circle, which in turn is defined by the coordinates of its center and the length of its radius.

#include <iostream>
#include <cmath>
using namespace std;

int point_in_circle (float x1, float y1, float x2, float y2, float radius) {
    float distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    if (distance <= radius)
        return 1;
    else
        return 0;
}

int main () {
    float x1, y1, x2, y2, radius;
    cout << "X coordinate of point: ";
    cin >> x1;
    cout << "Y coordinate of point: ";
    cin >> y1;
    cout << "X coordinate of circle's center: ";
    cin >> x2;
    cout << "Y coordinate of circle's center: ";
    cin >> y2;
    cout << "Radius of circle: ";
    cin >> radius;
    if (point_in_circle(x1, y1, x2, y2, radius) == 1)
        cout << "The point you provided is inside the circle." << endl;
    else
        cout << "The point you provided is outside the circle." << endl;
    return 0;
}