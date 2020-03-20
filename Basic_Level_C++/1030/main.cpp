#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//1030 完美数列 (25分)
int main() {
    int n;
    long long int p;
    cin >> n >> p;
    vector<long long int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0, temp = 0;
    for (int i = 0; i < n; ++i) {   // 从第一个开始找最小值 m
        for (int j = i + cnt; j < n; ++j) { //从最大的相差数开始找
            if(v[j] <= v[i] * p) {
                temp = j - i + 1;
                if(temp > cnt) {
                    cnt = temp;     // 当又找到更远的更新
                }
            } else {    // 当不满足条件时候
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}
