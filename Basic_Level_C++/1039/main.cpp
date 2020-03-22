#include <iostream>
#include <unordered_map>

using namespace std;

// 1039 到底买不买 (20分)
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char , int > m;
    int result = 0;
    for (int i = 0; i < s1.length(); ++i) {
        m[s1[i]] ++;
    }
    for (int j = 0; j < s2.length(); ++j) {
        if(m[s2[j]] > 0) {
            m[s2[j]] -- ;
        } else {
            result ++;
        }
    }
    if(result != 0) {
        printf("No %d", result);
    } else {
        printf("Yes %d", s1.length() - s2.length());
    }
    return 0;
}
