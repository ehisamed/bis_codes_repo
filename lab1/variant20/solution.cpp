#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (log(pow(a, b)) + pow(10, b + c)) / (a * sqrt(pow(c, 2) + 1));

    cout << "y = " << y << endl;
    return 0;
}
