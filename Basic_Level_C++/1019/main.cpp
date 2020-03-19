#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(char a, char b) { return a > b ;}

// 1019 数字黑洞 (20分)
int main() {
    string s;
    cin >> s;
    s.insert(0, 4 - s.length(), '0');
    do{
        string a = s;
        string b = s;
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end());
        int result = stoi(a) - stoi(b);
        s = to_string(result);
        s.insert(0, 4 - s.length(), '0');
        cout << a << " - " << b << " = " << s << endl;
    }while (s != "6174" && s != "0000");
    return 0;
}
