#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 5.26;
    double b = 8.27;
    double m = a * b;

    cout << fixed;
    cout.precision(3);
    cout << floor(m * 1000.0) / 1000.0;
    return 0;
}