#include <cstdio>
#include <algorithm>
using namespace std;
struct Node {
    int addr;
    int data;
    int next;
    bool flag;
}node[100010];
bool cmp(Node a, Node b) {
    if (!a.flag || !b.flag) {
        return a.flag > b.flag;
    } else {
        return a.data < b.data;
    }
}
//  1052 Linked List Sorting (25分)
int main() {
    int n, address;
    int a, b, data;
    scanf("%d %d", &n, &address);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &a, &data, &b);
        node[a] = {a, data, b, false};
    }
    int cnt = 0;
    for (int j = address; j != -1; j = node[j].next) {
        node[j].flag = true;
        cnt ++;
    }
    if (cnt == 0) {
        printf("0 -1");
    } else {
        sort(node, node + 100010, cmp);
        printf("%d %05d\n", cnt, node[0].addr); // cnt 写成 n;
        for (int i = 0; i < cnt; ++i) {
            printf("%05d %d ", node[i].addr, node[i].data);
            if(i != cnt - 1)
                printf("%05d\n", node[i + 1].addr);
            else
                printf("-1\n");
        }
    }

    return 0;
}
