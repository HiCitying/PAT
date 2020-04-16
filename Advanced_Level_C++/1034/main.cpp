#include <iostream>
#include <cstring>
#include <map>
using namespace std;
const int maxn = 2010;
const int INF = 100000000;

map<int, string> intToString;
map<string, int> stringToInt;
map<string, int> Gang;

int G[maxn][maxn] = {0}, weight[maxn] = {0};
int n, k, numPerson = 0;
bool vis[maxn] = {false};

void DFS(int nowVisit, int& head, int& number, int& totalValue) {
    number ++;
    vis[nowVisit] = true;
    if (weight[nowVisit] > weight[head]) {
        head = nowVisit;
    }
    for (int i = 0; i < numPerson; ++i) {   //枚举所有人
        if(G[nowVisit][i] > 0) {    //从 nowVisit 到达 i
            totalValue += G[nowVisit][i];
            G[nowVisit][i] = G[i][nowVisit] = 0;
            if(!vis[i]) {   // 节点未被访问
                DFS(i, head, number, totalValue);
            }
        }
    }
}
void DFSTrave() {
    for (int i = 0; i < numPerson; ++i) {
        if(!vis[i]) {
            int head = i, number = 0, totalValue = 0;
            DFS(i, head, number, totalValue);
            if (number > 2 && totalValue > k) {
                Gang[intToString[head]] = number;
            }
        }
    }

}
int change(string str) {
    if (stringToInt.find(str) != stringToInt.end()) {
        return stringToInt[str];
    } else {
        stringToInt[str] = numPerson;   // 映射
        intToString[numPerson] = str;
        return numPerson ++;            // 先返回编号再 +1
    }
}
//  1034 Head of a Gang (30分)
int main() {
    int w;
    string str1, str2;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> str1 >> str2 >> w;
        int id1 = change(str1);
        int id2 = change(str2);
        weight[id1] += w;
        weight[id2] += w;
        G[id1][id2] += w;
        G[id2][id1] += w;
    }
    DFSTrave();
    cout << Gang.size() << endl;
    map<string, int>::iterator it;
    for(it = Gang.begin(); it != Gang.end(); it++) {
        cout << it -> first << " " << it -> second << endl;
    }
    return 0;
}
