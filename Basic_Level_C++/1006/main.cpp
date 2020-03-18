#include <iostream>

using namespace std;

//1006 换个格式输出整数 (15分)
int main() {
    int a, i=0;
    cin >> a;
    int b[3] = {0};
    while (a != 0) {
        b[i++] = a % 10;
        a /= 10;
    }
    for (int j = 0; j < b[2]; ++j) {
        cout <<"B";
    }
    for (int k = 0; k < b[1]; ++k) {
        cout << "S";
    }
    for (int l = 0; l < b[0]; ++l) {
        cout << l + 1;
    }
    return 0;
}
