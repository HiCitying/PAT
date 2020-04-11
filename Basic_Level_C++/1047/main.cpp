#include <iostream>
#include <unordered_map>
using namespace std;

//  1047 编程团体赛 (20分)
int main() {
    int N;
    cin >> N;
    int no, cno, count;
    int max = 0;
    unordered_map< int, int > m;
    for (int i = 0; i < N; ++i) {
        scanf("%d-%d %d", &no, &cno, &count);
        m[no] += count;
        if (m[max] < m[no])
            max = no;
    }
    cout << max << " " << m[max];
    return 0;
}
