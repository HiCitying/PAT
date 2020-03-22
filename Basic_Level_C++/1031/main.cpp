#include <iostream>
#include <unordered_map>

using namespace std;

// 1031 查验身份证 (15分)

int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
int b[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
string s;
bool isTrue() {
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
        sum += (s[i] - '0') * a[i];
    }
    int temp = s[17] == 'X' ? 10 : s[17] - '0';
    if (b[sum % 11] == temp) {
        return true;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (!isTrue()) {
            cout << s << endl;
            flag = 1;
        }
    }
    if(!flag){
        cout << "All passed" ;
    }
    return 0;
}
//int main() {
//    string s;
//    int n;
//    cin >> n;
//    getchar();
//    int cnt = 0;
//    unordered_map<int, char> map;
//    map[0] = '1';
//    map[1] = '0';
//    map[2] = 'X';
//    map[3] = '9';
//    map[4] = '8';
//    map[5] = '7';
//    map[6] = '6';
//    map[7] = '5';
//    map[8] = '4';
//    map[9] = '3';
//    map[10] = '2';
//    int wight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
//    for (int i = 0; i < n; ++i) {
//        cin >> s;
//        bool b = false;
//        for (int k = 0; k < 17; ++k) {
//            if (isdigit(s[i])) {
//                continue;
//            } else {
//                b = true;
//                break;
//            }
//        }
//        if ( b ) {
//            cnt ++;
//            cout << s << endl;
//        } else {
//            int res = 0;
//            for (int j = 0; j < 17; ++j) {
//                res += ((s[j] - '0') * wight[j]);
//            }
//            res %= 11;
//            if ( s[17] == 'X' && map[res] != 'X') {
//                cnt ++;
//                cout << s << endl;
//            }else if ( (s[17] - '0') != (map[res] - '0')) {
//                cnt ++;
//                cout << s << endl;
//            }
//        }
//    }
//    if (cnt == 0) {
//        cout << "All passed" ;
//    }
//
//    return 0;
//}
