#include <iostream>

using namespace std;

// 1016 部分A+B (15分)
int main() {
    string s1, s2;
    int a, b;
    cin >> s1 >> a >> s2 >> b;
    int sa = 0, sb = 0;
    for (int i = 0; i < s1.length(); ++i) {
        if((s1[i] - '0')  == a) {
            sa = sa * 10 + a;
        }
    }
    for (int j = 0; j < s2.length(); ++j) {
        if ((s2[j] - '0') == b) {
            sb = sb * 10 + b;
        }
    }
    cout << (sa + sb);
    return 0;
}
