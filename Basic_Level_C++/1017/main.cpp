#include <iostream>

using namespace std;

// 1017 A除以B (20分)
// 除法原则
// 根据竖式除法思想，假设被除数为A，余数为R，除数为B，商为Q，则R初始化为A第1位，
// 不断使A的各个位依次成为R的末位直到R不小于B，保留商，R通过模除数B得到新余数，
// 才开始真正的除法运算。运算时，R先增加末位，Q再保留商，R再更新，如此循环直至运算进行至A末尾
int main() {
    string s;
    int A, B, Q = 0, R = 0;
    cin >> s >> B;
    for (int i = 0; i < s.length(); ++i) {
        A = R * 10 + (s[i] - '0');
        Q = A / B;
        R = A % B;
        if ( i == 0 && Q == 0 && s.length() > 1) {
            continue;
        } else {
            cout << Q;
        }
    }
    cout << " " << R;
    return 0;
}
