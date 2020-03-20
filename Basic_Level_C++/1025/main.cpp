#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;



// 1025 反转链表 (25分)
int main() {
    int first, k, n, temp;
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }

    int sum = 0; //不一定所有的输入的结点都是有用的，加个计数器
    while (first != -1) {
        list[sum ++] = first;
        first = next[first];
    }

//    for (int i = 0; i < (sum - sum % k); i += k) {
//        //
//        reverse(begin(list) + i, begin(list) + i + k);
//    }
//    for (int j = k; j <= sum; j += k) {
//        //
//        reverse(begin(list) + j - k, begin(list) + j);
//    }
    for (int j = 0; j < sum / k; j ++) {
        reverse(begin(list) + j * k, begin(list) + j * k + k);
    }

    for (int l = 0; l < sum - 1; ++l) {
        printf("%05d %d %05d\n", list[l], data[list[l]], list[l + 1]);
    }
    printf("%05d %d -1", list[sum - 1], data[list[sum - 1]]);
    return 0;
}
//struct node {
//    string addr;
//    int data;
//    string next;
//};
//int main() {
//    string head;
//    int k, n;
//    cin >> head >> n >> k;
//    node t_node;
//    unordered_map<string, node> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> t_node.addr >> t_node.data >> t_node.next;
//        m[t_node.addr] = t_node;
//    }
//    string t_head = head;
//    vector<node> v;
//    while ( t_head != "-1") {
//        v.push_back(m[t_head]);
//        t_head = m[t_head].next;
//    }
//    reverse(v.begin(), v.begin()+k);
//    for (int l = 0; l < k; ++l) {
//        v[l].next = v[l+1].addr;
//    }
//    for (int j = 0; j < v.size(); ++j) {
//        cout << v[j].addr << " " << v[j].data << " " << v[j].next << endl;
//    }
//}

//struct Node{
//    int data;
//    string next_add;
//};
//int main() {
//    string head;
//    int n, k;
//    cin >> head >> n >> k;
//    unordered_map<string, Node> map;
//    string s, next;
//    int data;
//    Node node;
//    for (int i = 0; i < n; ++i) {
//        cin >> s >> data >> next;
//        node.data = data;
//        node.next_add = next;
//        map[s] = node;
//    }
//    int realnum = 0;
//    string temp = head;
//    while (temp != "-1") {
//        realnum ++;
//        temp = map[temp].next_add;
//    }
//    string temp1 = head, temp2;
//    for (int j = 0; j < k-1; ++j) {
//        temp2 = map[temp1].next_add;
//        map[temp1].next_add = map[temp2].next_add;
//        map[temp2].next_add = head;
//        head = temp2;
//    }
//
//    for (int l = 0; l < realnum; ++l) {
//       cout << head << " " << map[head].data << " " << map[head].next_add << endl;
//       head = map[head].next_add;
//    }
//    return 0;
//}
