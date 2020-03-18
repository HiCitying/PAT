#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

// 1009 说反话 (20分)
int main() {
    stack<string> v;
    stringstream ss;
    string s;
    getline(cin, s);
    ss << s;
    while (ss >> s) {
        v.push(s);
    }
    s = v.top();
    cout << s;
    v.pop();

    while (!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}


