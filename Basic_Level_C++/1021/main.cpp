#include <iostream>
#include <vector>

using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> v(10);
    for (int i = 0; i < s.length(); ++i) {
        v[(s[i] - '0')] ++;
    }
    for (int j = 0; j < v.size(); ++j) {
        if (v[j] != 0 ) {
            printf("%d:%d\n", j, v[j]);
        }
    }
    return 0;
}
