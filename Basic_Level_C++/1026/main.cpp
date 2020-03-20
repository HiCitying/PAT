#include <iostream>

using namespace std;

// 1026 程序运行时间 (15分)
int main() {
    int a, b;
    cin >> a >> b;
    // 四舍五入 /100 + 0.5 取整  = + 50）/100
    int n = (b - a + 50) / 100;
    int h = n / 3600;
    n %= 3600;
    int m = n / 60;
    int s = n % 60;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
