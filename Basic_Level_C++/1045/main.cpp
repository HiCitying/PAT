#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1045 快速排序 (25分)
int main() {
    int n, max = 0;
    scanf("%d", &n);
    vector<int> a(n), b(n), c;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    for (int j = 0; j < n; ++j) {
        if(a[j] == b[j] && b[j] > max)
            c.push_back(a[j]);
        // 要在排序的原位置上， 还要比放在前面的大数要大
        if (b[j] > max)
            max = b[j];
    }
    printf("%d\n", c.size());
    for(int i = 0; i < c.size(); i++) {
        if (i != 0) printf(" ");
        printf("%d", c[i]);
    }
    printf("\n");

}
//int main() {
//    int n;
//    cin >> n;
//    int a[n];
//    vector<int> v;
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &a[i]);
//    }
//
//    for (int j = 0; j < n; ++j) {
//        bool l = false, r = false;
//        for (int i = 0; i < j; ++i) {
//            if ( a[i] > a[j]) {
//                l = true;
//                break;
//            }
//        }
//        for (int k = j + 1; k < n; ++k) {
//            if ( a[k] < a[j]) {
//                r = true;
//                break;
//            }
//        }
//
//        if ( !l && !r) {
//          v.push_back(a[j]);
//        }
//    }
//    printf("%d\n", v.size());
//    for (int m = 0; m < v.size(); ++m) {
//        if (m != 0)
//            printf(" ");
//        printf("%d", v[m]);
//    }
//    return 0;
//}
