#include <iostream>
#include <stack>

using namespace std;

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    int len = s.length();
    for (int i = 0; i < len; i++) {
        cout << s[i];
        if (s[i] == '-') continue;
        //  从后面开始每三位一组  len % 3 = x 每次从 x 下标位置开始分割
        if ((i + 1) % 3 == len % 3 && i != len - 1) cout << ",";
    }
    return 0;
}
// 1001 A+B Format (20分)
//int main() {
//    int a, b;
//    cin >> a >> b;
//    int sum = a + b;
//    if(sum < 0) {
//        cout << "-";
//        sum = -sum;
//    }
//    string ssum = to_string(sum);
//    stack<char> s;
//    for (int i = ssum.length() -1, count = 0 ; i >= 0; --i, count ++) {
//        if( count != 0 && count % 3 == 0) {
//            s.push(',');
//        }
//        s.push(ssum[i]);
//    }
//    while (!s.empty()) {
//        cout << s.top();
//        s.pop();
//    }
//    return 0;
//}
