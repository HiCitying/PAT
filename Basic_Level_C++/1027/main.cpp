#include <iostream>

using namespace std;

// 1027 打印沙漏 (20分)
int main() {
    int N, row = 0;
    char c;
    cin >> N >> c;
    for (int i = 0; i < N; ++i) {
        // 等差数列求和 Sn = ( a1 + (a1 + (n-1)*d)/ 2 * n;
        if ((2 * i * (i + 2) + 1) > N) {
            row = i - 1;
            break;
        }
    }
    for (int j = row; j > 0; --j) {
        for (int i = row - j; i > 0; --i) {
            printf(" ");
        }
        for (int k = j * 2 + 1; k > 0; k--) {
            printf("%c", c);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++){
        printf(" ");
    }
    printf("%c\n", c);
    for (int l = 1; l <= row; ++l) {
        for (int i = row - l ; i > 0; --i) {
            printf(" ");
        }
        for (int j = 0; j < l * 2 + 1; ++j) {
            printf("%c", c);
        }
        printf("\n");
    }
    cout << (N - (2 * row * (row + 2) + 1));
    return 0;
}
