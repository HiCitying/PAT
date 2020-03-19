#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1015 德才论 (25分)
// 解题思路
// 总共四类考试 采用分类存放到四个 vector 中后 vector 排序，把 vector 按顺序输出
typedef struct node{
    int num;
    int de;
    int cai;
}node;

int cmp(struct node a, struct node b) {
    if ((a.de + a.cai) != (b.de + b.cai))
        return (a.de + a.cai) > (b.de + b.cai);
    else if (a.de != b.de)
        return a.de > b.de;
    else
        return a.num < b.num;
}
int main() {
    int n, low, high;
    cin >> n >> low >> high;
    int total = n;
    vector<node> v[4];
    node temp;

    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &temp.num, &temp.de, &temp.cai);
        if (temp.de < low || temp.cai < low) {
            total --;
        } else if (temp.de >= high && temp.cai >= high) {
            v[0].push_back(temp);
        } else if (temp.de >= high && temp.cai < high) {
            v[1].push_back(temp);
        } else if (temp.de < high && temp.cai < high && temp.de >= temp.cai) {
            v[2].push_back(temp);
        } else {
            v[3].push_back(temp);
        }
    }

    printf("%d\n", total);
    for (int j = 0; j < 4; ++j) {
        sort(v[j].begin(), v[j].end(), cmp);
        for (int i = 0; i < v[j].size(); ++i) {
            printf("%d %d %d\n", v[j][i].num, v[j][i].de, v[j][i].cai);
        }
    }
    return 0;
}
