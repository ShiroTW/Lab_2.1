#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    double a, b;
    cout << "Введіть значення кута α (в радіанах): ";
    cin >> a;
    cout << "Введіть значення кута β (в радіанах): ";
    cin >> b;

    double z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 2);
   // double z2 = -4 * pow(sin((a - b) / 2), 2) * cos((a + b)); //

    cout << "Значення z1: " << z1 << endl;
   // cout << "Значення z2: " << z2 << endl; //
    cin.get();
    return 0;
}