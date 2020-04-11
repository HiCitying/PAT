#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//  1050 螺旋矩阵 (25分)
int main() {
    int N, m, n, t = 0;
    cin >> N;
    //  找到 行 与 列
    for (n = sqrt((double)N); n > 0; n--) {
        // m >= n
        if (N % n == 0) {
            m = N / n;
            break;
        }
    }
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a.begin(), a.end(), greater<int>());
    // 定义 vector 二维数组   m 行 n 列
    vector<vector<int> > b(m, vector<int>(n));
    int level = m / 2 + m % 2; // 中轴线
    for (int i = 0; i < level; ++i) {
        // 顺时针螺旋变量矩阵
        // 上行排  (该方法还未找出测试点 2， 4 bug )
//        for (int j = i; j < n - i - 1 && t < N; ++j) {
//            b[i][j] = a[t++];
//        }
//        // 右竖排()
//        for (int j = i ; j < m - i -1 && t < N; ++j) {
//            b[j][n-i-1] = a[t++];
//        }
//        // 下行排
//        for (int j = n - i - 1; j > i && t < N; --j) {
//            b[m - i - 1][j] = a[t++];
//        }
//        //左竖排
//        for (int j = m - i - 1; j > i && t < N; --j) {
//            b[j][i] = a[t++];
//        }
        for (int j = i; j < n - i && t < N; ++j) {
            b[i][j] = a[t++];
        }
        // 右竖排()
        for (int j = i + 1 ; j < m - i -1 && t < N; ++j) {
            b[j][n-i-1] = a[t++];
        }
        // 下行排
        for (int j = n - i - 1; j >= i && t < N; --j) {
            b[m - i - 1][j] = a[t++];
        }
        //左竖排
        for (int j = m - i - 2; j > i && t < N; --j) {
            b[j][i] = a[t++];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0 ; j < n; j++) {
            printf("%d", b[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
