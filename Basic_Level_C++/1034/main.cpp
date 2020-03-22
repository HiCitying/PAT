#include <iostream>
#include <cmath>

using namespace std;

long long a, b, c, d;

// 返回最大公约数 （辗转相除法）
// 377 319  余 58
// 319 58   余 29
// 58  29   余 0 直达余 0 为最小大公约数
long long gcd(long long t1, long long t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}

//更相减损术 直到相减两个数相等(超时)
// 98 63 = 35
// 63 35 = 28
// 35 28 = 7
// 28 7  = 21
// 21 7  = 14
// 14 7  = 7
long long gcds(long long t1, long t2) {
    while (t1 != t2) {
        if (t1 > t2) {
            t1 -= t2;
        } else {
            t2 -= t1;
        }
    }
    return t2;
}
void func(long long m, long long n) {
    if(m * n == 0) {
        // 分母为 0
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    // 判断是负数
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
    m = abs(m);
    n = abs(n);

    long long x = m / n;
    printf("%s", flag ? "(-" : "");
    // 分母比分子大 先输出整除部分
    if (x != 0) {
        printf("%lld", x);
    }
    //能够 除尽 结束
    if ( m % n == 0) {
        if(flag) {
            // 负号反括号
            printf(")");
        }
        return;
    }
    // 输出分数部分
    if( x != 0) {
        printf(" ");
    }
    // 分子
    m = m - (x * n);
    // 获得最大公约数
    long long t = gcd(m, n);
    m /= t;
    n /= t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}
int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b); printf(" + "); func(c, d); printf(" = "); func(a * d + b * c, b * d); printf("\n");
    func(a, b); printf(" - "); func(c, d); printf(" = "); func(a * d - b * c, b * d); printf("\n");
    func(a, b); printf(" * "); func(c, d); printf(" = "); func(a * c, b * d); printf("\n");
    func(a, b); printf(" / "); func(c, d); printf(" = "); func(a * d, b * c);
    return 0;
}
