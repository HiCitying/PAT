#include <iostream>

using namespace std;

// 1036 跟奥巴马一起编程 (15分)
int main() {
    int N;
    char c;
    cin >> N >> c;
    int t = N/2 + N%2;
    for (int i = 0; i < N; ++i) {
        cout << c;
    }
    cout << endl;
    for (int j = 0; j < t - 2; ++j) {
        cout << c;
        for (int i = 0; i < N - 2; ++i) {
            cout << " ";
        }
        cout << c;
        cout << endl;
    }
    for (int i = 0; i < N; ++i) {
        cout << c;
    }
    return 0;
}

//int main() {
//    int n;
//    char c;
//    cin >> n >> c;
//    int h = (n/2.0) + 0.5;
//    for (int i = 0; i < h; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if(i == 0 || i == (h - 1)) {
//                printf("%c", c);
//            } else{
//                if(j == 0 || j == (n-1)) {
//                    printf("%c", c);
//                } else{
//                    printf(" ");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
