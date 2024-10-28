#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    double a, b;
    cout << "Введiть значення кута α (в радiанах): ";
    cin >> a;
    cout << "Введiть значення кута β (в радiанах): ";
    cin >> b;

    double z1 = cos(a) + sin(a) + cos(3*a) + sin(3*a);
    double z2 = 2 * sqrt(2) * cos(a) * sin((4*atan(1)) / 4 + 2 * a);

    cout << "Значення z1: " << z1 << endl;
    cout << "Значення z2: " << z2 << endl;
    cin.get();
    return 0;
}