#include <iostream>
#include <cctype>
#include <string>

using namespace std;

//  1042 字符统计 (20分)
int main() {
    string s;
    getline(cin, s);
    int a[26] = {0};
    for (int i = 0; i < s.length(); ++i) {
        s[i] = tolower(s[i]);
    }
    for (int j = 0; j < s.length(); ++j) {
        if (islower(s[j])) {
            a[s[j] - 'a'] ++;
        }
    }
    int max = a[0], t = 0;
    for (int k = 1; k < 26; ++k) {
        if (a[k] > max) {
            max = a[k];
            t = k;
        }
    }
    printf("%c %d", t + 'a', max);
    return 0;
}
