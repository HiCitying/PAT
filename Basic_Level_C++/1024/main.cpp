#include <iostream>

using namespace std;

// 1024 科学计数法 (20分)
// 思路方法
// 条件 1.整数部分有一位 2.小数部分至少一位
// 当指数小于 0  在整数部分前面添加 (e - 1) 个零
// 当指数大于 0  小数点后一位开始计算不足直接补零，足够输出到 e 加上小数点继续输出剩下的
int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 'E' ) {
        i ++;
    }
    // 截取前一部分
    string t = s.substr(1,i-1);
    int n = stoi(s.substr(i+1));
    if (s[0] == '-') {
        cout << "-";
    }
    if(n < 0) {
        cout <<"0.";
        for (int j = 0; j < abs(n)-1; ++j) {
            cout <<"0";
        }
        for (int k = 0; k < t.length(); ++k) {
            if ( t[k] == '.')
                continue;
            cout << t[k];
        }
    } else{
        cout << t[0];
        int cnt, j;
        for( j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt ++) {
            cout << t[j];
        }
        if( j == t.length()) {
            // 不足补 0
            for (int k = 0; k < n - cnt; ++k) {
                cout << "0";
            }
        } else{
            cout << ".";
            for (int k = j; k < t.length(); ++k) {
                cout << t[k];
            }
        }
    }

    return 0;
}

