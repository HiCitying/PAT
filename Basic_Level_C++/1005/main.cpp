#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[10000]; //大数组用于存放已经被验证的
//bool cmp(int a, int b){ return a > b;}
// 1005 继续(3n+1)猜想 (25分)
int main() {
    //
    int k, n, flag = 0;
    cin >> k;
    // 分配 k 的内存 大小
    vector<int> v(k);
    for (int i = 0; i < k; ++i) {
        cin >> n;
        v[i] = n;
        while (n != 1) {
            if (n % 2 == 0){
                n /= 2;
            } else {
                n = (n*3 + 1) / 2;
            }
            if (arr[n] == 1) {
                break;
            }
            arr[n] = 1;
        }
    }
    //
    sort(v.begin(), v.end(), greater<int>());
    for (int j = 0; j < k; ++j) {
        if (arr[v[j]] == 0) {
            if (flag == 1) {
                cout << " ";
            }
            cout << v[j];
            flag = 1;
        }
    }
    return 0;
}
