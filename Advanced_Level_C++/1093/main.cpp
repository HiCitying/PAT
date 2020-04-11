#include <iostream>
using namespace std;
// 1093 Count PAT's (25分)
int main() {
    string s;
    cin >> s;
    int CP = 0, CT = 0;
    int cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == 'T')
            CT++;
    }
    for (int j = 0; j < s.length(); ++j) {
        if(s[j] == 'P')
            CP ++;
        if(s[j] == 'T')
            CT --;
        if (s[j] == 'A') {
            cnt = (cnt + CP * CT ) % 1000000007;
        }
    }
    cout << cnt << endl;
    return 0;
}
