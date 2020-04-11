#include <iostream>

using namespace std;

// 1051 复数乘法 (15分)
int main() {
    double r1, r2, i1, i2;
    cin >> r1 >> i1 >> r2 >> i2;
    double r = (r1*r2 - i1*i2);
    double i = (r1*i2 + i1*r2);
    cout << r << " " << i << "i";
    return 0;
}
