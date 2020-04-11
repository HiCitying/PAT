#include <iostream>
#include <algorithm>

using namespace std;

//  1048 数字加密 (20分)
int main() {
    string a, b, c;
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    // 将 a b 化成相等 补上0无影响
    if (lena > lenb) {
        b.append(lena - lenb, '0');
    } else {
        a.append(lenb - lena, '0');
    }
    char str[14] = "0123456789JQK";
    for (int i = 0; i < a.length(); ++i) {
        if (i % 2 == 0) {
            c += str[(a[i] - '0' + b[i] - '0') % 13];
        } else {
            int temp = b[i] - a[i];
            if (temp < 0) temp = temp + 10;
            c += str[temp];
        }
    }
    for (int i = c.length() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}
//int main() {
//    string A, B;
//    cin >> A >> B;
//    char num[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
//    int lena = A.length();
//    int lenb = B.length();
//    if(lena < lenb) {
//        int pos = lenb - lena;
//        for (int i = 0; i < pos; ++i) {
//            printf("%c", B[i]);
//        }
//        for (int i = pos, j = 0; i < lenb; ++i, j++) {
//            if ((lenb - i) % 2 != 0) {
//                int x =(A[j] + B[i] - (2*'0')) % 13;
//                printf("%c", num[x]);
//            } else{
//                int y = (B[i] - A[j]) > 0 ? (B[i] - A[j]) : (B[i] - A[j] + 10);
//                printf("%c", num[y]);
//            }
//         }
//    } else if (lenb == lena) {
//        for (int i = 0; i < lenb; ++i) {
//            if ((lenb - i) % 2 != 0) {
//                int x =(A[i] + B[i] - (2*'0')) % 13;
//                printf("%c", num[x]);
//            } else{
//                int y = (B[i] - A[i]) > 0 ? (B[i] - A[i]) : (B[i] - A[i] + 10);
//                printf("%c", num[y]);
//            }
//        }
//    } else {
//        int pos = lena - lenb;
//        for (int i = 0, j = pos; i < lenb; ++i, ++j) {
//            if ((lenb - i) % 2 != 0) {
//                int x =(A[j] + B[i] - (2*'0')) % 13;
//                printf("%c", num[x]);
//            } else{
//                int y = (B[i] - A[j]) > 0 ? (B[i] - A[j]) : (B[i] - A[j] + 10);
//                printf("%c", num[y]);
//            }
//        }
//    }
//
//    return 0;
//}
