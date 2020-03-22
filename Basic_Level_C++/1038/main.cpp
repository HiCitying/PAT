#include <iostream>
#include <unordered_map>

using namespace std;

// 1038 统计同成绩学生 (20分)
int main() {
    int n1;
    cin >> n1;
    int socre;
    unordered_map<int, int > m;
    for (int i = 0; i < n1; ++i) {
        scanf("%d", &socre);
        m[socre] ++;
    }
    int n2;
    cin >> n2;
    int scores;
    for (int j = 0; j < n2; ++j) {
        scanf("%d", &scores);
        if(j != 0) {
            printf(" ");
        }
        printf("%d", m[scores]);
    }
    return 0;
}
