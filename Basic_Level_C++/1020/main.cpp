#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct mooncake {
    float amount;
    float price;
    float unit;
};

bool cmp (struct mooncake a, struct mooncake b) { return a.unit > b.unit ;}
// 1020 月饼 (25分)
int main() {
    int n, need;
    cin >> n >> need;
    vector<mooncake> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i].amount;
    }
    for (int j = 0; j < n; ++j) {
        cin >> a[j].price;
    }
    for (int k = 0; k < n; ++k) {
        a[k].unit = a[k].price / a[k].amount;
    }
    sort(a.begin(), a.end(), cmp);
    float result = 0.0;

    for (int l = 0; l < n; ++l) {
        if (need >= a[l].amount) {
            result += a[l].price;
        } else {
            result += need * a[l].unit;
            break;
        }
        need -= a[l].amount;
    }

    printf("%.2f", result);
    return 0;
}
