#include <iostream>

using namespace std;

//1011 A+B 和 C (15分)
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        printf("Case #%d: %s\n", i, (a+b) > c ? "true" : "false");
    }
    return 0;
}
