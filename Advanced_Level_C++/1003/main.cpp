#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXV = 510;   // 最大顶点数
const int INF = 1000000000; //无穷大

int n, m, st, ed, G[MAXV][MAXV], weight[MAXV];
int d[MAXV], w[MAXV], num[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s) {  // s为起始点
    fill(d, d + MAXV, INF);
    memset(num, 0, sizeof(num));
    d[s] = 0;
    w[s] = weight[s];  //初始权重
    num[s] = 1;    //一条路径
    for (int i = 0; i < n; ++i) {
        int u = -1, MIN = INF;  //找到d[u] 最小
        for (int j = 0; j < n; ++j) {
            if(!vis[j] && d[j] < MIN) {
                u = j;
                MIN = d[j];
            }
        }
        //
        if (u == -1) return;
        //
        vis[u] = true;
        for (int v = 0; v < n; ++v) {
            // 如果 v 未被访问 且 u 能到达v并且使得以u为中介使得d[v]更短
            if (!vis[v] && G[u][v] != INF) {
                if(d[u] + G[u][v] < d[v]) {
                    d[v] = d[u] + G[u][v];
                    w[v] = w[u] + weight[v];
                    num[v] = num[u];
                } else if (d[u] + G[u][v] == d[v]) {
                    if (w[u] + weight[v] > w[v]) {
                        w[v] = w[u] + weight[v];
                    }
                    //  增加相等路径数量
                    num[v] = num[v] + num[u];
                }
            }
        }
    }

}
// 1003 Emergency (25分)
int main() {
    scanf("%d %d %d %d", &n, &m, &st, &ed);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &weight[i]);
    }
    int u, v;
    fill(G[0], G[0]+MAXV*MAXV, INF);
    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &u, &v);
        scanf("%d", &G[u][v]);
        G[v][u] =  G[u][v];
    }
    Dijkstra(st);
    printf("%d %d\n", num[ed], w[ed]);
    return 0;
}
