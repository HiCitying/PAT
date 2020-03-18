#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// 1008 数组元素循环右移问题

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    m %= n;
    if (m != 0) {
        reverse(v.begin(), v.end());
        reverse(v.begin(),v.begin() + m);
        reverse(v.begin() + m, v.end());
    }

    for (int j = 0; j < n-1; ++j) {
        cout << v[j] << " ";
    }
    cout << v[n-1];
    return 0;
}
