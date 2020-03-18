#include <iostream>
#include <map>

using namespace std;

//1003 我要通过！ (20分)

// 解题思路
// PAT  P 左边的 A 数量乘以中间 A 的数量等于右边 A 的数量
int main() {
    int n, p = 0, t = 0;
    string s;
    cin >> n;

    for (int i = 0; i < n; ++i) {
       cin >> s;
       map<char, int> m;

        for (int j = 0; j < s.size(); ++j) {
            m[s[j]] ++;
            if (s[j] == 'P') {
                p = j;
            }
            if (s[j] == 'T') {
                t = j;
            }
        }

        //   P T 只能出现一次 A 至少出现一次    只能出现PAT 三个字母    后面满足数学规律
        if (m['P'] == 1 && m['T'] == 1 && m['A'] >= 1 && m.size() == 3 && t-p >= 1 && p * (t - p -1) == s.length() - t - 1 ) {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }


    }
    return 0;
}
