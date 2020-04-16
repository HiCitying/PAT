#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
const int MAXV = 1010;
struct Node {
    int id;     //节点编号
    int layer;  //节点层号
};
vector<Node> Adj[MAXV]; //邻接表
bool inq[MAXV] = {false};//顶点是否被加入队列

int BFS(int s, int L) { // s 起点 L 层数
    int numForward = 0; //根节点不算
    queue<Node> q;
    Node start;
    start.id = s;
    start.layer = 0;
    q.push(start);
    inq[start.id] = true;
    while (!q.empty()) {
        Node topNode = q.front();
        q.pop();
        int u = topNode.id;
        for (int i = 0; i < Adj[u].size(); ++i) {
            Node next = Adj[u][i];  //从 u 出发能到达的 next 节点
            next.layer = topNode.layer + 1;
            if(!inq[next.id] && next.layer <= L) {
                q.push(next);
                inq[next.id] = true;
                numForward ++;
            }
        }
    }
    return numForward;
}
//  1076 Forwards on Weibo (30分)
int main() {
    Node user;
    int n, L, numFollow, idFollow;
    scanf("%d %d", &n, &L);
    for (int i = 1; i <= n; ++i) {
        user.id = i;
        scanf("%d", &numFollow);
        for (int j = 0; j < numFollow; ++j) {
            scanf("%d", &idFollow);
            Adj[idFollow].push_back(user);
        }
    }
    int numQuery, s;
    scanf("%d", &numQuery);
    for (int k = 0; k < numQuery; ++k) {
        memset(inq, false, sizeof(inq));
        scanf("%d", &s);
        int numForward = BFS(s,L);
        printf("%d\n", numForward);
    }
    return 0;
}
