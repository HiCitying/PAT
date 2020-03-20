#include <iostream>
#include <stack>

using namespace std;

int main() {
    int a, b, base;
    cin >> a >> b >> base;
    int res = a + b;
    stack<int> s;
    int r;
    if (res == 0) {
        cout << 0;
        return 0;
    }
    while ( res != 0) {
        r = res % base;
        s.push(r);
        res /= base;
    }
    while ( !s.empty()) {
        cout << s.top();
        s.pop();
    }
    return 0;
}
