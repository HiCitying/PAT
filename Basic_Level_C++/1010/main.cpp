#include <iostream>
#include <sstream>

using namespace std;

// 1010 一元多项式求导 (25分)
int main() {
    int flag = 0;
    int n, e;
    string s;
    stringstream ss;
    getline(cin, s);
    ss << s;
    while (ss >> n >> e) {
        if (e != 0) {
            if (flag == 1)
                cout << " ";
            cout << n * e << " " << e - 1;
            flag = 1;
        }
    }
    if (flag == 0) cout << "0 0";
    return 0;
}




