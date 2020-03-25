#include <iostream>
#include <unordered_map>

using namespace std;
struct node{
    string strn;
    int cno;
};

// 1041 考试座位号 (15分)
int main() {
    int n;
    cin >> n;
    unordered_map<int, node> m;
    int no;
    node temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp.strn >> no >> temp.cno;
        m[no] = temp;
    }
    cin >> n;
    for (int j = 0; j < n; ++j) {
        cin >> no;
        cout << m[no].strn << " " << m[no].cno << endl;
    }
    return 0;
}
