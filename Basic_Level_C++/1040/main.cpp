#include <iostream>

using namespace std;

// 1040 有几个PAT (25分)
// 思路
// 固定 A 前面 P 的个数乘以后面 T 的个数代表以 这个A的PAT 有多少个

int main() {
    string s;
    getline(cin, s);
    int cntt = 0, cntp = 0;
    int total = 0;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == 'T')
            cntt ++;
    }
    for (int j = 0; j < s.length(); ++j) {
        if(s[j] == 'P') {
            cntp ++;
        }
        if(s[j] == 'T') {
            cntt --;
        }
        if(s[j] == 'A') {
            total = (total + (cntt * cntp)) % 1000000007;
        }
    }
    printf("%d", total);
}

//int main() {
//    string s;
//    getline(cin, s);
//    int total = 0;
//    for (int i = 0; i < s.length() - 2; ++i) {
//        if(s[i] == 'P') {
//            for (int j = i + 1; j < s.length() - 1; ++j) {
//                if (s[j] == 'A') {
//                    for (int k = j + 1; k < s.length(); ++k) {
//                        if(s[k] == 'T') {
//                            total ++;
//                        }
//                    }
//                }
//            }
//        }
//    }
//    printf("%d", total % 1000000007 );
//    return 0;
//}
