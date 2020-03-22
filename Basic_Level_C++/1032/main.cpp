#include <iostream>
#include <map>

using namespace std;

// 1032 挖掘机技术哪家强 (20分)

int main() {
    int n;
    cin >> n;
    int no, score;
    map<int, int > m;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &no, &score);
        if( m.find(no) == m.end()) {
            m[no] = score;
        } else {
            m[no] += score;
        }
    }

    for(auto x:m){
        if (x.second > score) {
            no = x.first;
            score = x.second;
        }
    }
    cout << no << " " << score;
    return 0;
}
