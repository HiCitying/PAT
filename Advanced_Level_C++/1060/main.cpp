#include <iostream>
#include <string>
using namespace std;
int n;  //有效位数
string deal(string s, int &e) {
    int k = 0;
    while (s.length() > 0 && s[0] == '0') {
        s.erase(s.begin());
    }
    if(s[0] == '.') {   //小数点在前，小于 1 的数
        s.erase(s.begin());
        while (s.length() > 0 && s[0] == '0') {
            s.erase(s.begin());
            e --;
        }
    } else {
        while (k < s.length() && s[k] != '.') { // 小数点右移
            k ++;
            e ++;
        }
        if(k < s.length()) {
            s.erase(s.begin() + k); //去掉小数点
        }
    }
    if(s.length() == 0) {   // 改数为0
        e = 0;
    }
    int num = 0;
    k = 0;
    string res;
    while (num < n) {
        if(k < s.length())
            res += s[k++];
        else
            res += '0';
        num ++;
    }
    return res;
}
// 1060 Are They Equal (25分)
int main() {
    string s1, s2, s3, s4;
    cin >> n >> s1 >> s2;
    int e1 = 0, e2 = 0;
    s3 = deal(s1, e1);
    s4 = deal(s2 , e2);
    if (e1 == e2 && s3 == s4) {
        cout << "YES 0." << s3 << "*10^" << e1 << endl;
    } else {
        cout << "NO 0." << s3 << "*10^" << e1 << " 0." << s4 << "*10^" << e2 << endl;
    }
    return 0;
}
