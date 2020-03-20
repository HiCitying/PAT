#include <iostream>

using namespace std;

// 1023 组个最小数 (20分)
int main() {
    int a[10] = {0};
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    if (a[0] != 0) {
        for (int i = 1; i < 10; ++i) {
            if (a[i] != 0) {
                cout << i;
                a[i] --;
                break;
            }
        }
    }
    for (int j = 0; j < 10; ++j) {
        if(a[j] != 0) {
            for (int i = 0; i < a[j]; ++i) {
                cout << j;
            }
        }
    }
    return 0;
}
