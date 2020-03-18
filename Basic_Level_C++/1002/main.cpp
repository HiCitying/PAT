#include <iostream>
#include <string>

using namespace std;
//1002 写出这个数 (20分)
int main() {
    string s;
    cin >> s;
    int sum = 0;
    string strs[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    // 采用 ASCII 码
    for (int i = 0; i < s.length(); ++i) {
        sum += s[i] - '0';
    }

    string ssum = to_string(sum);
    for (int j = 0; j < ssum.length(); ++j) {
        if ( j != 0) {
            cout << " ";
        }
        cout << strs[ssum[j] - '0'];
    }
    return 0;
}
