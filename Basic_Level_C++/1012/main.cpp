#include <iostream>
#include <vector>

using namespace std;

// 1012 数字分类 (20分)
int main() {
    int n, num, A1 = 0, A2 = 0,A5 = 0, flag = 1;
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];
    for (int i = 0; i < n; ++i) {
        cin >> num;
        v[num % 5].push_back(num);
    }

    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < v[j].size(); ++i) {
            if(j == 0 && v[j][i] % 2 == 0) {
                A1 += v[j][i];
            }
            if (j == 1 ) {
                A2 += (flag * v[j][i]);
                flag = -flag;
            }
            if (j == 3) {
                A4 += v[j][i];
            }
            if (j == 4 && A5 < v[j][i]) {
                A5 = v[j][i];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {
            printf("N");
            continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1lf", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}
