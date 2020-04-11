#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int acnt = 0, bcnt = 0;
    int a1, a2, b1, b2;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        if ((a1 + b1) == a2 && (a1 + b1 != b2)) {
            bcnt ++;
        }
        if ((a1 + b1) != a2 && (a1 + b1 == b2)) {
            acnt ++;
        }
    }
    printf("%d %d", acnt, bcnt);
    return 0;
}
