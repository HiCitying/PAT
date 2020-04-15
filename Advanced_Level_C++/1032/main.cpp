#include <cstdio>
using namespace std;
struct NODE {
    char data;
    int next;
    bool flag;
    NODE() {
        flag = false;
    }
}node[100010];
// 1032 Sharing (25分)
int main() {
    int s1, s2, n;
    int a, b;
    char data;
    scanf("%d %d %d", &s1, &s2, &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %c %d", &a, &data, &b);
        node[a].data = data;
        node[a].next = b;
    }
    for (int i = s1; i != -1; i = node[i].next) {
        node[i].flag = true;
    }
    for (int j = s2; j != -1; j = node[j].next) {
        if (node[j].flag) {
           printf("%05d\n", j);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
