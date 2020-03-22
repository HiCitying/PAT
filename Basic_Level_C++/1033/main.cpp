#include <iostream>
#include <cctype>

using namespace std;

// 1033 旧键盘打字 (20分)
// 思路
// toupper() tolower() 将返回有对应大小写 或者不变的 int 值
int main() {
   string bad, should;
   getline(cin, bad);
   getline(cin, should);
    for (int i = 0; i < should.length(); ++i) {
        if(bad.find(toupper(should[i])) != string::npos) {
            // 大写出现 该字母一定坏了
            // 数字 字符不影响
            continue;
        }
            // 经过上一轮筛选，该大写字母没坏
        if(isupper(should[i]) && bad.find('+') != string::npos) {
            continue;
        }
        // 上档键坏了该字母不会输出
        cout << should[i];
    }
    return 0;
}
