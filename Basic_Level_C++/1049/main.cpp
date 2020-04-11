#include <iostream>
#include <vector>

using namespace std;

//  1049 数列的片段和 (20分)
// 思路   0.1, 0.2, 0.3, 0.4
//        4    6    6     4

int main() {
    int n;
    cin >> n;
    double sum = 0, temp;
    for (int i = 1; i <= n; ++i) {
        cin >> temp;
        sum += temp * i * (n - i + 1);
    }
    printf("%.2lf", sum);
    return 0;
}

//  三层 for 循环超时
//int main() {
//    int N;
//    cin >> N;
//    vector<float> v(N);
//    for (int i = 0; i < N; ++i) {
//        cin >> v[i];
//    }
//    float s1 = 0;
//    float s2 = 0;
//    float s3 = 0;
//    for (int i = 0; i < N; ++i) {   //循环次数
//        s2 = 0;
//        for (int j = i; j < N; ++j) {
//            s3 = 0;
//            for (int k = i; k <= j; ++k) {
//                s3 += v[k];
//            }
//            s2 += s3;
//        }
//        s1 += s2;
//    }
//    printf("%.2f", s1);
//    return 0;
//}
